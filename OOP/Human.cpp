#include "Human.h"
#include "Console.h"

int Human::count = 0;
const float Human::tax = 0.2f;

void func() {
		std::cout << "funcy\n";
	}

void Human::Read()
{
	std::cout << "Name: ";
	std::cin >> name;	
	std::cout << "Age: ";
	age = getData<unsigned short>();
}

void Human::Write()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}

void Human::setAge(age_t age) {

}