#include "menu.h"

void play()
{
	std::cout << "Play";
}

void help()
{
	std::cout << "Help";
}

void menu()
{
	std::cout << "1. Play" << std::endl;
	std::cout << "2. Help" << std::endl;
	std::cout << "0. Exit" << std::endl;
	
	char choice;
	std::cin >> choice;

	switch (choice)
	{
		case '1': play(); break;

		case '2': help(); break;

		case '0': exit(0);
	
		default: 
			std::cout << std::endl << std::endl;
			std::cout << "You must choose a number in between 1, 2 and 0 for the coresponding function!" << std::endl;
			std::cout << std::endl << std::endl;
			menu();
	}
}