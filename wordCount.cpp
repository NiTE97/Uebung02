/**
 * @Author BBauer(3533735), NTerwort(3813622) 
 *
 */


#include <stdio.h>
#include <iostream>
#include "Uebung2.h"


using namespace std;
bool istBuchstabe(char c){
	return (c != ' ' && c != '\n' && c != '\t' );
}

bool istWhitespace(char c) {
	return (c == ' ' || c == '\n' || c == '\t');
}

bool istWort(char cur, char previous){
	return istBuchstabe(cur) && (istWhitespace(previous));
}

int zaehleWoerter(char *str){
	int count = 0;
	char cur;
	char previous = ' ';

	while (*str) {
		cur=*str;
		if(istWort(cur, previous)) count ++;

		previous = cur;

		++str;
	}

	return count;
}

