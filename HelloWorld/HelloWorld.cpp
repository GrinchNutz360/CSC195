#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

using namespace std;
class Student;

class Person{
public:
    float weight;
    int age;

};

int main() {
    Student student("Tristin");
    student.Write();

    Person person;
    person.age = 19;

    unsigned int i = 84;
	//printf("%d\n", i);
    std::cout << i << std::endl;
    std::cout << sizeof(char) << std::endl;
	std::cout << sizeof(person) << std::endl;
    
	cout << ++i << endl;

    char c = i;
	cout << &c << endl;

    f();

    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    return 0;
}
