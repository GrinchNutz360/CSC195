#pragma once
#include "Human.h"
#include <iostream>

class Teacher : public Human {
public:
	Teacher() {}
	Teacher(std::string name, unsigned short age, std::string classesTaught, float salary)
		: Human{ name, age }, classesTaught{classesTaught}, salary{salary} {
		std::cout << "Teacher Constructor\n";
	}
	void setClassTaught(std::string classes){
		classesTaught = classes;
	}
	std::string getClassTaught() {
		return classesTaught;
	}
	Type getType() override {
		return Type::TEACHER;
	}
	
	void Read() override;
	void Write() override;

	void Work() override{
		std::cout << "Teacher work" << std::endl;
	}
private:
	std::string classesTaught;
	float salary = 0.0f;
};