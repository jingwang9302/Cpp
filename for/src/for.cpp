//============================================================================
// Name        : for.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	for(int i = 0; i < 5; i++) {
		cout << "i is: " << i << endl;
		if (i == 3) {
			continue;
		}
		cout << "looping... " << endl;
	}
/*
	string password = "hello";
	string value;
	do{
		cout << "Enter your password > "<< flush;
		cin >> value;
		if (value == password) {
			break;
		} else {
			cout << "Access denied." << endl;
		}

	} while (true);
	cout << "Password accepted" << endl;
	cout << "Program quitting..." << endl;
*/

	return 0;
}
