#pragma once
#include <iostream>

using age_t = unsigned short;
class Human {

public:
	enum Type {
		STUDENT,
		TEACHER
	};
public:
	Human() {
		std::cout << "Human Constructor\n";
		count++;
	}

	Human(std::string name, age_t age) : name(name), age(age) {
		std::cout << "Human Constructor\n";
		count++;
	}

	~Human() {
		std::cout << "Human Destructor\n";
		count--;
	}
	virtual void Read();
	virtual void Write();

	std::string getName(){ return name; }
	unsigned short getAge() { return age; }
	void setAge(age_t age);

	virtual Type getType() = 0;

	virtual void Work() = 0;

	static int GetCount() { return count; }

protected:
	std::string name;
	age_t age = 0;
	static int count;
	static const float tax;
};

void func();