/*****************************************
 Copyright © 2006
 Sigma Designs, Inc. All Rights Reserved
 Proprietary and Confidential
 *****************************************/

/**
  @file   boot_auth.h
  @ingroup application
  @brief  Boot Authentication tool

  @author David Bryson
  @date   02-17-2006
*/

#ifndef __BOOT_AUTH_H__
#define __BOOT_AUTH_H__

#define MAX_BUFFER_BYTE_SIZE		256
#define MAX_KEY_WORD_SIZE		64
#define MAX_FILENAME_SIZE		128
#define	ASN_SHA1_SIG_LEN		15
#define SHA1_DIGEST_SIZE		20

unsigned char asn_sha1_sig[ASN_SHA1_SIG_LEN] = {0x30, 0x21, 0x30, 0x09,
						0x06, 0x05, 0x2b, 0x0e,
						0x03, 0x02, 0x1a, 0x05,
						0x00, 0x04, 0x14};
struct runtime_args {
	int		n_len;
	int		e_len;
	int		sig_len;
	unsigned long	*n; 		// public key (modulo)
	unsigned long	e; 		// public exponent, hardcoded 65537
	unsigned char	*sig;  		// SHA1 signature
	char	*pub_filename; 		
	char	*sig_filename;		
	char	*auth_filename;	// file path to authenticate
};


/**
  Creates a struct for holding all the runtime arguments

  @param void
  @return pointer to the memory address of the allocated struct
*/

struct runtime_args *create_runtime_args(void);

/**
  Destroy's a struct for holding all the runtime arguments

  @param args : a pointer to the memory address of a struct runtime_args
  @return void
*/
void destroy_runtime_args(struct runtime_args *args);

/**
  Prints out a breif description of how to use the program on stderr

  @param void
  @return 0 in all cases.
*/
int usage(void);

/**
  Parses the CLI args to the program, and may read data from files passed
  in by argv

  @param argc : number of arguments passed in
  @param argv : arguments passed in
  @param args : struct to load file data into
  @return 0 upon successful parsing, and -1 if any error is encountered
*/
int parse_args(int argc, char **argv, struct runtime_args *args);

/**
  Runs over the various values in the struct to check for sanity.  Checking
  that the user provided a public key for decryption, and a file to decrypt.

  @param args : pointer to a allocated struct runtime_args
  @return 0 for sanity, returns -1 for insanity.
*/
int args_sanity(struct runtime_args *args);

/**
  Loads the contents of a file into a buffer in memory.
  
  @param filename : pointer to the filename to open
  @param dest : buffer to copy the file data to
  @param bytes : number of bytes allocated for the buffer
  @return -1 if there was an error reading the file, or if the buffer's
  size was exceeded.  Otherwise returns 0.
 */
int load_file(unsigned char *filename, unsigned char *dest, int bytes);


/**
  Copies data from a PKCS_v1.5 padded buffer into a smaller buffer without
  padding.
  
  @param data : a buffer to copy to data to
  @param data_len : size of the buffer to copy the data to, in bytes
  @param pad_buffer : the buffer containing the padded data
  @param pad_buffer_len : size of the buffer containing padded data
  @return -1 if there was an error copying, or reading the buffer.
  Otherwise returns a value > 0 that is the length of the unpadded data.
 */
int pkcs15_unpad(unsigned char *data, int data_len, unsigned char* pad_buffer, int pad_buffer_len);

/**
  Reverses the byte ordering for a buffer of memory.  Used to convert a
  memory block from BigEndian to LittleEndian.
  
  @param bottom : bottom of the buffer(lower memory address)
  @param top : top of the buffer(higher memory address)
  @return 0 in all cases
 */
int revbytes(unsigned char* bottom, unsigned char* top);


/**
 Swaps the bytes at a, b.
  
  @param a : byte a
  @param b : byte b
  @return returns 0 in all cases
 */
int byteswap(unsigned char* a, unsigned char* b);

#endif // __BOOT_AUTH_H__
