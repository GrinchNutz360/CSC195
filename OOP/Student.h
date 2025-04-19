#pragma once
#include "Human.h"
#include <iostream>
class Student : public Human{
public:
	Student() {
		std::cout << "Student Constructor\n";
	}
	Student(std::string name, unsigned short age, float gpa) : Human{ name, age }, gpa { gpa } {
		
		std::cout << "Student Constructor\n";	
	}
	Type getType() override {
		return Type::STUDENT;
	}
	void Work() override {
		std::cout << "Student work" << std::endl;
	}

	void Read() override;
	void Write() override;

	float getGPA() { return gpa; }
	void setGPA(float gpa) {
		this->gpa = gpa;
	}
private:
	float gpa = 4.0f;
};	
