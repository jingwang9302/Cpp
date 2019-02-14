//============================================================================
// Name        : input.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string input;
	cout << "Enter my name: " << flush;
	cin >> input;
	cout << "You entered: " << input << endl;

	string myName = "ziyi";

	if(input == myName){
		cout << "You are right. " << input << " is my name."<< endl;
	} else {
		cout << "Sorry, " << input << " is not my name." << endl;
	}

	return 0;
}
