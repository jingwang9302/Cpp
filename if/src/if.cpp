//============================================================================
// Name        : if.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string password = "123";

	int i = 1;
	while(i < 3) {
		cout << "Enter your password: " << flush;
		string input;
		cin >> input;

		if(input == password) {
			cout << "Password Accepted." << endl;
		} else {
			cout << "Password Denied." << endl;
		}
		i = i + 1;
	}
}
