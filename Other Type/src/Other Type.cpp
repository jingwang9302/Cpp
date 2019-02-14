//============================================================================
// Name        : Other.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true; //0 false; 1 is true
	cout << bValue << endl;

	char cValue = 55; //ascii character. to get the acture number
	cout << cValue << endl;
	cout << (int)cValue << endl;

	char cValue2 = 'g';
	cout << cValue2 << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << (char)wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
