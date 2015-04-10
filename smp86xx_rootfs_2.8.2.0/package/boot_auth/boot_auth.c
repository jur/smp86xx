/*****************************************
 Copyright © 2006
 Sigma Designs, Inc. All Rights Reserved
 Proprietary and Confidential
 *****************************************/

/**
  @file   boot_auth.c
  @ingroup application
  @brief  Boot Authentication tool

  @author David Bryson
  @date   02-17-2006
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#include "fastsha.h"
#include "rsa_enc_dec.h"

#include "boot_auth.h"
#include "debug.h"

#define VERBOSE(fmt, ...)\
	if( verbose_output ) fprintf(stdout, fmt, ##__VA_ARGS__); 

int verbose_output;
int main(int argc, char **argv) {
	int	 	i;
	int 		infile;
	int		ret_val = 0;	
	int		buf_data;
	int	 	bytes_read;
	unsigned char 	run_hash[MAX_BUFFER_BYTE_SIZE];
	unsigned char	buf[MAX_BUFFER_BYTE_SIZE];
	struct sha1_ctx	sha1_ctx;
	struct runtime_args *args = create_runtime_args();
	
	if ( (parse_args(argc, argv, args) != 0) || (args_sanity(args) != 0)) {
		usage();
		ret_val = -1;
		goto cleanup;
	}

	if ( strncmp("-", args->auth_filename, 128) == 0) {
		DEBUG_LOG(0, "Reading from stdin\n");
		free(args->auth_filename);
		args->auth_filename = strdup("from STDIN");
		infile = STDIN_FILENO;
	} else {
		if ((infile = open(args->auth_filename, O_RDONLY)) == -1 ) {
			fprintf(stderr, "Unable to open file: %s\n", args->auth_filename);
			usage();
			ret_val = -1;
			goto cleanup;
		}
	}

	sha1_init(&sha1_ctx);
	do {	
		bytes_read = read(infile, run_hash, MAX_BUFFER_BYTE_SIZE);
		sha1_input(&sha1_ctx, (const unsigned char*)&run_hash, bytes_read);
	} while ( bytes_read > 0 );

	// done reading...
	if( infile != STDIN_FILENO ) close(infile);

	sha1_done(&sha1_ctx);
	memcpy(run_hash, sha1_ctx.digest, SHA1_DIGEST_SIZE);
	
	revbytes(run_hash, run_hash + (SHA1_DIGEST_SIZE - 1));

	VERBOSE("Calculated Hash: ");
	for(i = 0; i < SHA1_DIGEST_SIZE; i++) {
		VERBOSE("%02x", run_hash[i]);
	}
	VERBOSE("\n");

	VERBOSE("Signed Hash:  ");
	for(i = 0; i < args->sig_len; i++) {
		if ( !(i % 32) ) VERBOSE("\n");
		VERBOSE("%02x", args->sig[i]);
	}
	VERBOSE("\n");


	rsa_enc_dec((unsigned long*)args->sig, (const unsigned long*)args->n,
			(args->n_len / 4), (const unsigned long*)&args->e, 1);

	revbytes(args->sig, args->sig + (args->sig_len -1));

	// how many bytes of unpadded data do we have ?
	if ( (buf_data = pkcs15_unpad(buf, MAX_BUFFER_BYTE_SIZE, args->sig, args->sig_len)) == -1 ) {
		ret_val = -1;
		goto cleanup;
	}
	
	VERBOSE("Decrypted Hash:  ");
	for(i = 0; i < SHA1_DIGEST_SIZE; i++) {
		if ( !(i % 32) ) VERBOSE("\n");
		VERBOSE("%02x", buf[i]);
	}
	VERBOSE("\n");
	
	if( memcmp(run_hash, buf, SHA1_DIGEST_SIZE) == 0 ) {
		fprintf(stdout, "File %s authenticated\n", args->auth_filename);
	} else { 
		fprintf(stdout, "File %s did not authenticate!\n", args->auth_filename);
		ret_val = -1;
	}

cleanup:	
	destroy_runtime_args(args);
	return ret_val;
}

int usage(void) {
	fprintf(stdout,"boot_auth [options] <file to be authenticated>\n"
"\t--help, -h print out this help message\n"
"\t--public, -p <public key file>\n"
"\t--signature, -s <signature file>\n"
"\t--verbose, -v enable verbose output\n"
"\n\t Any of the filenames can be replaced by a '-' for reading from stdin\n"
	);
	return 0;
}

int parse_args(int argc, char** argv, struct runtime_args *args) {
	int	c;
	int	digit_optind = 0;

	if ( argc == 1 ) {
		fprintf(stderr,"You must specify a file to authenticate.\n");
		return -1;
	}
	
	// last argument is the auth file
	args->auth_filename = strdup( argv[argc-1]);

	while (1) {
		int this_option_optind = optind ? optind : 1;
		int option_index = 0;
		static struct option long_options[] = {
			{"help", 0,0,0},
			{"public", 1, NULL, 'p'},
			{"signature", 1, NULL, 's'},
			{"verbose", 0,0,'v'}
		};

		c = getopt_long( argc, argv, "h:p:s:v", 
				long_options, &option_index);
		if ( c == -1 )
			break;

		switch (c) {
			case 'h':
				return -1;
				break;
			case 'p':
				DEBUG_LOG(0, "given public filename %s\n", optarg);
				args->pub_filename = strdup(optarg);
				args->n = malloc(MAX_KEY_WORD_SIZE*4);
				args->n_len = load_file(
						(unsigned char*)args->pub_filename,
						(unsigned char*)args->n, 
						MAX_KEY_WORD_SIZE*4);
				if ( args->n_len <= 0) 	return -1;

				break;
			case 's':
				DEBUG_LOG(0, "given signature filename %s\n", optarg);
				args->sig_filename = strdup(optarg);
				args->sig = malloc(MAX_KEY_WORD_SIZE*4);
				args->sig_len = load_file(
						(unsigned char*)args->sig_filename,
						(unsigned char*)args->sig, 
						MAX_KEY_WORD_SIZE*4);
				if ( args->sig_len <= 0) return -1;

				revbytes(args->sig, args->sig + (args->sig_len - 1));
				break;
			case 'v':
				verbose_output = 1;
				break;

			default:
				return -1;
				break;
		};
	}
	return 0;
}

int args_sanity(struct runtime_args *args) {
	int ret_val = 0;
	if ( args->pub_filename == NULL ) {
		fprintf(stderr, "You MUST specify a public key for authentication\n");
		ret_val = -1;
	}

	if ( args->sig_filename == NULL ) {
		fprintf(stderr, "You MUST specify a public key for authentication\n");
			ret_val = -1;
	}
	
	return ret_val;
}

int load_file(unsigned char *filename, unsigned char *dest, int bytes) {
	int		fileh;
	int		bytes_read;
	int		file_size = 0;
	int		i;

	if ( strncmp("-", (char*)filename, 128) == 0) {
		DEBUG_LOG(0, "Reading from stdin\n");
		fileh = STDIN_FILENO;
	} else {
		if ( (fileh = open((char*)filename, O_RDONLY)) == -1 ) {
			fprintf(stdout, "Unable to open file: %s\n", filename);
			return -1;
		}
	}

	// fix this to actually try to read number of specified bytes
	// and check proper error conditions
	do {  
		bytes_read = read(fileh, dest, bytes); 
		file_size += bytes_read;
	} while ( bytes_read > 0 );

	DEBUG_LOG(0,"Read in %d bytes from file %s\n", file_size, filename);
	if( fileh != 0 ) close(fileh);

	DEBUG_LOG(0,"Read in:  ");
	for(i = 0; i < file_size; i++) {
		if ( !(i % 32) ) DEBUG_LOG(0,"\n");
		DEBUG_LOG(0,"%02x", dest[i]);
	}
	DEBUG_LOG(0,"\n");
		
	return file_size;
}

struct runtime_args *create_runtime_args(void) {
	struct runtime_args *t = (struct runtime_args *)malloc(sizeof(struct runtime_args));
	t->n = NULL;
	t->e = 65537;
	t->sig = NULL;
	t->pub_filename = NULL;
	t->sig_filename = NULL;
	t->auth_filename = NULL;
	return t;
}

void destroy_runtime_args(struct runtime_args *args) {
	if ( args->n != NULL ) free(args->n);
	if ( args->sig != NULL ) free(args->sig);
}

int pkcs15_unpad(unsigned char *data, int data_len, unsigned char* pad_buffer, int pad_buffer_len) {
	int i;
	if ( (pad_buffer[0] == 0x00) && (pad_buffer[1] == 0x01) ) {
		DEBUG_LOG(0,"byte 0 = %02x\nbyte 1 = %02x\n", pad_buffer[0], pad_buffer[1]);
		// PKCS v1.5 01 standard, this is the padding we support
		// moves over 0xff until it his the 0x00 denoting end of pad
		for(i=2; (pad_buffer[i] != 0x00) && (i < pad_buffer_len) ; i++) {};
		DEBUG_LOG(0,"Found padding in message until byte %d.\n", i);
		DEBUG_LOG(0,"Checking for ASN SHA1 signature.\n", i);

		if(memcmp(asn_sha1_sig, pad_buffer + i + 1, ASN_SHA1_SIG_LEN) != 0) {
			DEBUG_LOG(0,"Did not find ASN encoded SHA1 signature!\n");	
			return -1;
		}

		
		if( data_len < (pad_buffer_len - i) ) {
			DEBUG_LOG(0,"Not enough room to copy %d bytes to %d bytes.\n", pad_buffer - i, data_len);
			return -1;
		}
		// +1 offset for the last 00 pad byte
		memcpy(data, pad_buffer + i + 1 + ASN_SHA1_SIG_LEN, pad_buffer_len - i );

	} else {
		fprintf(stderr,"File is not PKCS 1.5 padded\nOnly PKCS v1.5 padding supported\n");
		return -1;
	}
	return pad_buffer_len - i - 1;
}

int revbytes(unsigned char* bottom, unsigned char* top) {
	byteswap(bottom, top);
	if ( bottom+1 == top )
		return 0;
	else
		revbytes(bottom+1, top-1);

	return 0;
}

int byteswap(unsigned char* a, unsigned char* b) {
	unsigned char temp;

	temp = *a;
	*a = *b;
	*b = temp;

	return 0;
}
