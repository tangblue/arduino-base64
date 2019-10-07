/*
 * Copyright (c) 2013 Adam Rudd.
 * See LICENSE for more information
 */
#ifndef _BASE64_H
#define _BASE64_H

#ifdef __cplusplus
extern "C" {
#endif

/* base64url_encode:
 * 		Description:
 * 			Encode a string of characters as base64url
 * 		Parameters:
 * 			output: the output buffer for the encoding, stores the encoded string
 * 			input: the input buffer for the encoding, stores the binary to be encoded
 * 			inputLen: the length of the input buffer, in bytes
 * 		Return value:
 * 			Returns the length of the encoded string
 * 		Requirements:
 * 			1. output must not be null or empty
 * 			2. input must not be null
 * 			3. inputLen must be greater than or equal to 0
 */
int base64url_encode(char *output, char *input, int inputLen);

/* base64url_decode:
 * 		Description:
 * 			Decode a base64url encoded string into bytes
 * 		Parameters:
 * 			output: the output buffer for the decoding,
 * 					stores the decoded binary
 * 			input: the input buffer for the decoding,
 * 				   stores the base64url string to be decoded
 * 			inputLen: the length of the input buffer, in bytes
 * 		Return value:
 * 			Returns the length of the decoded string
 * 		Requirements:
 * 			1. output must not be null or empty
 * 			2. input must not be null
 * 			3. inputLen must be greater than or equal to 0
 */
int base64url_decode(char *output, char *input, int inputLen);

/* base64url_enc_len:
 * 		Description:
 * 			Returns the length of a base64url encoded string whose decoded
 * 			form is inputLen bytes long
 * 		Parameters:
 * 			inputLen: the length of the decoded string
 * 		Return value:
 * 			The length of a base64url encoded string whose decoded form
 * 			is inputLen bytes long
 * 		Requirements:
 * 			None
 */
int base64url_enc_len(int inputLen);

/* base64url_dec_len:
 * 		Description:
 * 			Returns the length of the decoded form of a
 * 			base64url encoded string
 * 		Parameters:
 * 			input: the base64url encoded string to be measured
 * 			inputLen: the length of the base64url encoded string
 * 		Return value:
 * 			Returns the length of the decoded form of a
 * 			base64url encoded string
 * 		Requirements:
 * 			1. input must not be null
 * 			2. input must be greater than or equal to zero
 */
int base64url_dec_len(char *input, int inputLen);

#ifdef __cplusplus
}
#endif
#endif // _BASE64_H
