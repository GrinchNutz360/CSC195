
#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

void Square(int& i) // function that takes a reference parameter
{
	i = i * i; // multiply the int parameter by itself
}
void Double(int* i) // function that takes a pointer parameter
{
	*i = *i * 2; // multiply the int pointer parameter by 2
}
int main()
{
	// ** REFERENCE **
	int i = 5; // declare an int variable and set it to 5
	int& r = i; // declare an int reference and set it to the int variable
	cout << i << endl; // output the int variable
	r = 10; // change the reference to 10
	cout << i << endl; // output the int variable
	// what happened to the int variable when the reference was changed? (it changed to 10)
	cout << &i << endl; // output the address of the int variable	
	cout << &r << endl; // output the address of the reference
	// are the addresses the same or different? (They are the same) 


	// ** REFERENCE PARAMETER **
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	Square(i); // call the Square function with the int variable
	cout << i << endl; // output the int variable
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
	 
	 
	// ** POINTER VARIABLE **
	int* p = &i; // declare an int pointer and set it to the address of the int variable;
	cout << p << endl; // output the pointer
	// what is this address that the pointer is pointing to? (the reference r)
	cout << *p << endl; // output the dereference pointer


	// ** POINTER PARAMETER **
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	Double(p); // call the Double function with the int pointer
	cout << *p << endl; // output the dereference pointer
	cout << i << endl; // output the int variable
	// did the int variable's value change when using the pointer? (yes)
}
