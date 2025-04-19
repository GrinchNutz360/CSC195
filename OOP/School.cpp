#include "School.h"
#include "Student.h"
#include "Teacher.h"

School::~School()
{
	for (Human* human : humans)
	{
		delete human;
	}
}

void School::add(Human::Type type)
{
	Human* human = nullptr;
	switch (type)
	{
	case Human::STUDENT:
		human = new Student;
		break;
	case Human::TEACHER:
		human = new Teacher;
		break;
	default:
		break;
	}
	human->Read();
	humans.push_back(human);
}

void School::displayAll()
{
	for (Human* human : humans)
	{
		human->Write();
	}
}
