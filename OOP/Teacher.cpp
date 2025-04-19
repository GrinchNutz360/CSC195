#include "Teacher.h"
#include "console.h"

void Teacher::Read()
{
	std::cout << "Teacher:\n";
	Human::Read();
	std::cout << "Classes Taught: ";
	std::cin >> classesTaught;
	std::cout << "Salary: ";
	salary = getData<int>();
}

void Teacher::Write()
{
	std::cout << "Teacher:\n";
	Human::Write();
	std::cout << "Classes Taught: " << classesTaught << std::endl;
	std::cout << "Salary: " << salary << std::endl;
}
