#include "Student.h"
#include <iostream>
#include "Console.h"


void Student::Read()
{
	std::cout << "Student:\n";
	Human::Read();
	std::cout << "GPA: ";
	gpa = getData<float>();
}

void Student::Write()
{
	std::cout << "Student:\n";
	Human::Write();
	std::cout << "GPA: " << gpa << std::endl;
}