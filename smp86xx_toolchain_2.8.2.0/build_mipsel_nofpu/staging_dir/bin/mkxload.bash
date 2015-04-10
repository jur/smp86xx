#!/bin/bash
set -e
#
if [ $# != 6 ]; then 
    cat <<EOF
Syntax: $0 <XSDK_ROOT> <REV> <CERTID> <payload.bin> <payload.sig> <payload.xload>

Example:
$0 /utils/em8xxx/signed_items ES4_dev 0006 material.bin material.bin.8634_ES4_dev_0006.bin material.xload

Typically, the signature <payload.sig> of <payload.bin>, made with
the private key which public key appears in CertificateName.bin,
might not be held by Sigma.
EOF
    exit -1 
fi
#
XSDK_ROOT=$1
REV=$2
CERTID=$3
PAYLOAD=$4
PAYLOAD_SIG=$5
XLOAD=$6
#
source xsdk_env.bash
#
echo mkxload.bash - Creating $XLOAD
echo "  Certificate     : $CERT_BIN"
echo "  Certificate Sig : $CERT_SIG"
echo "  Payload         : $PAYLOAD"
echo "  Payload Sig     : $PAYLOAD_SIG"

if [ "$RMCFLAGS" == "" ]; then
	CHIP=8634
else
	X=`echo $RMCFLAGS |tr ' ' '\n' |grep "DEM86XX_CHIP" | tr '=' '\n' | grep -v "DEM86XX_CHIP"`
	echo $X
	if [ "$X" == "EM86XX_CHIPID_TANGO3" ]; then
        	CHIP=8644
	else
        	CHIP=8634
	fi
fi

#Check files exists
if [ ! -f $CERT_BIN ]; then
	echo Certificate missing : $CERT_BIN
	exit -1;
fi
if [ ! -f $CERT_SIG ]; then
	echo Certificate Signature Missing : $CERT_SIG
	exit -1;
fi
if [ ! -f $PAYLOAD ]; then
	echo Payload Missing : $PAYLOAD
	exit -1;
fi
if [ ! -f $PAYLOAD_SIG ]; then
	echo Payload Signature Missing : $PAYLOAD_SIG
	exit -1;
fi

#Check payload signature
if [ -f $CERT_PUBLIC_KEY ]; then
	echo Checking Payload Signature...
	TMPSIG=`mktemp /tmp/sig.XXXXXX`
	revbytes.pl $PAYLOAD_SIG > $TMPSIG

	if $XSDK_OPENSSL sha1 -verify $CERT_PUBLIC_KEY -signature $TMPSIG $PAYLOAD; then
		echo Payload signature verified.
	else
		echo Payload signature verification failed.
		exit -1;
	fi
fi

#Start with Certificate, Certificate Signature and Payload Signature:
cat "$CERT_BIN" "$CERT_SIG" "$PAYLOAD_SIG" >"$XLOAD"
SekID=0x`cert_sekid $CERT_BIN`
if [ $SekID == 0xff ]; then
	#No encryption of payload:
	echo Clear
	cat "$PAYLOAD" >>"$XLOAD"
else
	#Check payload size for encryption:
	BIN_SIZE=`wc -c "$PAYLOAD" | awk '{print $1}'`
	if [ $[BIN_SIZE & 0xf] != 0 ]; then
		cat <<EOF
BIN_SIZE = $BIN_SIZE
"$PAYLOAD" size should be a multiple of 16 for AES encryption. 
Abort.
EOF
		exit -1
	fi
	
	#generate random session key and IV:	
	SK=`head -c 16 /dev/urandom |frombin.bash -`
	IV=`head -c 16 /dev/urandom |frombin.bash -`
	TMPFILESSL=`mktemp /tmp/mkxload.ssl.XXXXXX`
	echo Session key = $SK. IV = $IV
	
	#Encrypt the session key:
	F=`printf "%d" $SekID`
	if [ $F -lt 7 ]; then
		PK=$XSDK_PUBLIC_KEY/${CHIP}_${REV}_sek${F}_pubkey.pem
		if [ -f "$PK" ]; then
			echo "  RSA public key  : $PK"
		else
			echo "RSA public key $PK not found"
			exit -1
		fi
		# SEKId0-6: Encrypt using rsa public key
		tobin.bash $SK |revbytes.pl - > $TMPFILESSL
		$XSDK_OPENSSL rsautl -encrypt -pubin -inkey "$PK" -in $TMPFILESSL | revbytes.pl - >>"$XLOAD"
	else
		# SEKId 7-13: Encrypt using sek AES private key
		F=$[F-7]
		TMPFILE=`mktemp /tmp/mkxload.XXXXXX`
		echo TMPFILE : $TMPFILE
		H=`sha1sum "$CERT_BIN" |awk '{print $1}'`
		SEKAES=${XSDK_SEKAES}/${CHIP}_${REV}_${H}_sekaes/${CHIP}_${REV}_${H}_sekaes${F}.bin
		if [ -f $SEKAES ]; then 
			echo About to use SEKAES key : $SEKAES 
		else
			echo Missing SEKAES key : $SEKAES
			exit -1
		fi
		
		tobin.bash $SK >$TMPFILE
		zeropad.bash $TMPFILE 256
		$XSDK_OPENSSL enc -aes-128-cbc -K `frombin.bash $SEKAES` -iv $IV -in $TMPFILE > "$TMPFILESSL"
		SIZESSL=`wc -c "$TMPFILESSL"|awk '{print $1}'`
		head -c $[SIZESSL-16] "$TMPFILESSL" >>"$XLOAD"
		rm $TMPFILE
	fi
	
	#Finish with  IV and payload
	tobin.bash $IV >>"$XLOAD"	
	$XSDK_OPENSSL enc -aes-128-cbc -K $SK -iv $IV -in "$PAYLOAD" > "$TMPFILESSL"
	SIZESSL=`wc -c "$TMPFILESSL"|awk '{print $1}'`
	head -c $[SIZESSL-16] $TMPFILESSL >>"$XLOAD"
	rm $TMPFILESSL
fi
