#pragma once
#include "Human.h"
#include <iostream>
#include <vector>


class School {
public:
	~School();

	void add(Human::Type type);

	void displayAll();
private:
	std::vector<Human*> humans;

};