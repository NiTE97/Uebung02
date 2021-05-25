#include <stdio.h>
#include <iostream>
#include <cstring>
#include "Uebung2.h"

using namespace std;

static void removeSpaces (char *str){
	char * src = str;
	char * dst = src;

	while (*src != '\0'){
		if (*src != ' ' && *src != '\t' && *src != '\n'){
			*dst++ = *src;
		}
		src++;
	}
	*dst = '\0';
	
}

int vergleicheBuchstaben(char * str1, char * str2){
	char c1;
	char c2;	

	size_t lengthStr1 = strlen(str1);
	size_t lengthStr2 = strlen(str2);
	int max = -1;

	if (lengthStr1 > lengthStr2){
		max = lengthStr1;
	} else {
		max = lengthStr2;
	}
	
	for (int i = 0; i < max; ++i){
		c1 = *str1;
		c2 = *str2;
		
		if(c1 > c2){
			return 1;
		} else if (c1 < c2){
			return -1;
		} else {
		++str1;
       		++str2;
		}
	}
	return 0;
}

int stringCompareMain(char * str1, char * str2)
{
	removeSpaces(str1);
	removeSpaces(str2);
	
	std::cout << vergleicheBuchstaben(str1, str2) << std::endl;
	
	return 0;
}
