#ifndef _AES_H_
#define _AES_H_
#include <stdint.h>
// #define the macros below to 1/0 to enable/disable the mode of operation.
//
// CBC enables AES128 encryption in CBC-mode of operation and handles  PKCS7-padding.

#ifndef CBC
  #define CBC 1
#endif

#ifndef CTR
  #define CTR 1
#endif

#if defined(CBC) && CBC

void AES128_CBC_encrypt_buffer(uint8_t* output, uint8_t* input, uint32_t length, const uint8_t* key, const uint8_t* iv);
#endif // #if defined(CBC) && CBC

#if defined(CTR) && CTR

void AES128_CTR_encrypt_buffer(uint8_t* output, uint8_t* input, uint32_t length, const uint8_t* key, const uint8_t* iv);

#endif // #if defined(CTR) && CTR





#endif //_AES_H_