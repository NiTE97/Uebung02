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

int woerterMain()
{
	char str[80];

	std::cout << "String eingeben: " << std::endl;
	cin.getline(str, sizeof(str));
	std::cout << str << std::endl;
	std::cout << "Ergebnis: " << zaehleWoerter(str);

	return 0;
}
