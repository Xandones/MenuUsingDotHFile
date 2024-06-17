#include <iostream>
#include <cstdlib>
#include "FunctionsPrototypes.h"

// This CPP file contains the functions definitions. It is useless alone.

void ShowMenu()
{
	do
	{
		std::cout << "**** Tickets for cinema ****\n";
		std::cout << "1 - Buy half price ticket\n";
		std::cout << "2 - Buy full price ticket\n";
		std::cout << "3 - Quit program\n";		
	} while (ProcessChoice(ReturnChoice()) != 3);
}

int ReturnChoice()
{
	int Choice = 0;
	std::cout << "Choose your option: ";
	std::cin >> Choice;
	return Choice;
}

int ProcessChoice(int Choice)
{
	switch (Choice)
	{
		case 1: std::cout << "\nYou bought a half price ticket.\n\n"; break;
		case 2: std::cout << "\nYou bought a full price ticket.\n\n"; break;
		case 3: std::cout << "\nQuitting program.\n\n"; exit(0);
		default: std::cout << "\nInvalid option!\n\n";
	}

	return Choice;
}
