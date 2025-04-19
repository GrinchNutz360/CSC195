// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Human.h"
#include "Student.h"
#include <vector>
#include "Teacher.h"
#include "School.h"
int main()
{
	School school;

	bool quit = false;
	while (!quit) {

		
		//display menu
		std::cout << "1) Add Human\n";
		std::cout << "2) Display All Humans\n";
		std::cout << "3) Display Human of Type\n";
		std::cout << "4) Quit\n";

		unsigned short selection;
		std::cin >> selection;

		switch (selection) {
			{
		case 1:
			std::cout << "1) Student\n";
			std::cout << "2) Teacher\n";
			unsigned short type;
			std::cin >> type;

			school.add(static_cast<Human::Type>(type - 1));
			break;
		case 2:
			system("cls");
			school.displayAll();
			break;
		case 3:
			type = 4;
			break;
		case 4:
			quit = true;
			break;
			}
		}
	}
}
