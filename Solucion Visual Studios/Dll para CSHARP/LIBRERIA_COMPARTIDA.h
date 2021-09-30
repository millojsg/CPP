#ifndef LIBRERIA_COMPARTIDA_H
#define LIBRERIA_COMPARDIA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <array>
#include <stdio.h>

using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_MY_DLL
	#define LIBRERIA_COMPARTIDA __declspec(dllexport)
#else
	#define LIBRERIA_COMPARTIDA __declspec(dllimport)
#endif

	void LIBRERIA_COMPARTIDA StrCat(const char* str1, const char* str2, char* newstr);
	void LIBRERIA_COMPARTIDA StrCpy(char* str1, char* str2);
	int LIBRERIA_COMPARTIDA Add(int a, int b);
	void LIBRERIA_COMPARTIDA PipeCommand(const char* strCmd);
	void LIBRERIA_COMPARTIDA SaySomething(const char* str);
	 
#ifdef __cplusplus
}
#endif

#endif //Fin de la DLL
