#include <stdio.h>
#include <iostream>
#include <cstring>
#include "Uebung2.h"

using namespace std;

char * entferneWhitespaces(char * str){
	char * cleanStr = new char[80];
	char c;
	int temp = 0;

	for (int i = 0; i < strlen(str); ++i){
		c = str[i];
		if(c != ' ' && c != '\t' && c != '\n'){
			cleanStr[temp]= c;
			temp++;
		}
	}
	return cleanStr;
}

int vergleicheBuchstaben(char * str1, char * str2){
	char c1;
	char c2;	

	size_t lengthStr1 = strlen(str1);
	size_t lengthStr2 = strlen(str2);

	if(lengthStr1 != lengthStr2){
		return lengthStr1 > lengthStr2 ? 1 : -1;
	}
	
	for (int i = 0; i < strlen(str1); ++i){
		c1 = *str1;
		c2 = *str2;

		if(c1 > c2){
			return 1;
		} else if (c1 < c2){
			return -1;
		} 
	}
	return 0;
}

int buchstabenMain(char * str1, char * str2)
{
	str1 = entferneWhitespaces(str1);
	str2 = entferneWhitespaces(str2);
	
	std::cout << vergleicheBuchstaben(str1, str2) << std::endl;
	
	return 0;
}
