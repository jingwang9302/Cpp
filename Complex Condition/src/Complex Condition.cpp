//============================================================================
// Name        : Complex.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int value1 = 7;
	int value2 = 4;

	if(value1 < 8 && value2 > 5) {
		cout << "Condition 1: true" << endl;
	}
	else {
		cout << "Condition 1: false" << endl;
	}

	if(value1 < 8 || value2 > 5) {
		cout << "Condition 2: true" << endl;
	}
	else {
		cout << "Condition 2: false" << endl;
	}

	bool condition1 = (value2 !=8) && (value1 == 10);
	cout << condition1 <<endl;


	return 0;
}
