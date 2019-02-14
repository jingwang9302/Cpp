//============================================================================
// Name        : do-while.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string password = "hello";
	string value;

	do{
		cout << "Enter your password > "<< flush;
		cin >> value;
		if (value != password) {
					cout << "Password denied." << endl;
				}

	} while (value != password);

	return 0;
	cout<< sizeof(1);
}
