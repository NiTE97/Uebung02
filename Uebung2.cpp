#include <stdio.h>
#include <iostream>
#include "Uebung2.h"
using namespace std;

void buchstaben(){
	char str[80];

	printf("String eingeben:");
	cin.clear();
	cin.sync();
	cin.getline(str, sizeof(str));
	printf("Ergebnis: %d", zaehleWoerter(str));
}

void compString(){
	char * str1 = new char[80];
	char * str2 = new char[80];

	printf("Bitte String 1 eingeben:\n");
	cin.clear();
	cin.sync();
	cin.getline(str1, sizeof(str1));
	printf("Bitte String 2 eingeben:\n");
	cin.clear();
	cin.sync();
	cin.getline(str2, sizeof(str2));
	
	stringCompareMain(str1, str2);
	
}

int main()
{
	int choice = -1;
	printf("Bitte wählen Sie eine der Funktionen\n1: Wörter zählen\n2: Strings vergleichen\n=>"); 
	cin >> choice;
	cin.ignore();

	switch (choice) {
		case 1:
			buchstaben();			
			break;
		case 2:
			compString();		
			break;
		default:
			std::cout << "Diese Möglichkeit existiert nicht!" << std::endl;
	}

	return 0;
}
