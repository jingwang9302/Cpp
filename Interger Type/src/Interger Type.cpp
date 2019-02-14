//============================================================================
// Name        : Interger.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>

using namespace std;

int main() {

	int value = 76546;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX <<endl;
	cout << "Min int value: " << INT_MIN <<endl;

	long int lValue = 2345678345567;
	cout << lValue <<endl;

	short int sValue = 3;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(short int) << endl;

	unsigned int uValue = 234567;
	cout << uValue << endl;
	return 0;
}
