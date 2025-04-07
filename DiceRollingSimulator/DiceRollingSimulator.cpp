// DiceRollingSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int numberOfDice = 0;
	int sides = 0;
	int total = 0;
	cout << "Enter the number of dice: ";
	cin >> numberOfDice;
	cout << "Enter the number of sides on each die: ";
	cin >> sides;
	srand(time(0));
	for (int i = 0; i < numberOfDice; i++) {
		int randomDice = rand() % sides + 1;
		total += randomDice;
		cout << "Die " << i + 1 << ": " << randomDice << endl;
	}
	cout << "Total: " << total << endl;
	return 0;
}

//int diceRoll(int numberOfDice, int sides) {
//	for (int i = 0; i < numberOfDice; i++) {
//		int randomDice = rand() % sides + 1;
//	}
//	return numberOfDice;
//}