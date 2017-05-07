#ifndef _MD5_H
#define _MD5_H
#include <system.hpp>
#include <windef.h>
#include <stdio.h>

#ifdef __alpha
typedef unsigned int UINT4;
#else
typedef unsigned long int UINT4;
#endif
#ifdef __DLL__
#define DLL_EI __declspec(dllexport)
#else
#define DLL_EI __declspec(dllimport)
#endif
#define MD5_INIT_STATE_0 0x67452301
#define MD5_INIT_STATE_1 0xefcdab89
#define MD5_INIT_STATE_2 0x98badcfe
#define MD5_INIT_STATE_3 0x10325476
void MD5Init(void);
void MD5Update(unsigned char *bug, unsigned int len);
void MD5Final(char* cReturnStr);
void Transform(UINT4 *buf, UINT4 *in);
void GetMD5(char* pBuf, UINT nLength,char* cReturnStr);
extern "C" char* DLL_EI MD5(char* Str, int size); //char* MD5(char* Str, int size)
extern "C" char* DLL_EI MD5_FILE(char* Path); //char* md5_file( char *path )
#endif



