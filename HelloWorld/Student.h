#pragma once
#include <string>
void f();

class Student {
public:
	Student() {}
	Student(std::string name) { this -> name = name; }

	void Write();
	std::string GetName() { return name; }
	
private:
	std::string name;
};