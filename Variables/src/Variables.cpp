//============================================================================
// Name        : Variables.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 7;
	int numberAnimals = numberCats + numberDogs;

	cout << "number of cats: " << numberCats << endl;
	cout << "number of dogs: " << numberDogs << endl;

	cout << "Total number of animals: " <<numberAnimals <<endl;
	cout << "New dog acquired!" << endl;
	numberDogs = numberDogs + 1;
	cout << numberDogs <<endl;



	return 0;
}
