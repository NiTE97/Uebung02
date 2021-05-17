#include <stdio.h>
#include <iostream>
#include "Uebung2.h"
using namespace std;

void buchstaben(){
	char str[80];

	std::cout << "String eingeben:" << std::endl;
	cin.getline(str, sizeof(str));
	std::cout << "Ergebnis: " << zaehleWoerter(str);
}

void woerter(){
	char * str1 = new char[80];
	char * str2 = new char[80];

	std::cout << "Bitte String 1 eingeben;" << std::endl;
	cin.getline(str1, sizeof(str1));
	std::cout << "Bitte String 2 eingeben" << std::endl;
	cin.getline(str2, sizeof(str2));
	
	buchstabenMain(str1, str2);
	
}

int main()
{
	int choice = -1;
	std::cout << "Bitte wählen Sie eine der Funktionen\n1: Wörter zählen\n2: Strings vergleichen\n=>" << std::endl;
	cin >> choice;

	switch (choice) {
		case 1:
			woerter();			
			break;
		case 2:
			buchstaben();		
			break;
		default:
			std::cout << "Diese Möglichkeit existiert nicht!" << std::endl;
	}

	return 0;
}
