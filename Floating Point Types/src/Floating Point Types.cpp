//============================================================================
// Name        : Floating.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	cout << sizeof(float) << endl;
	cout << sizeof(double) <<endl;
	cout << sizeof(long double) << endl;

	float fValue = 7.4; //float on shows 8 digits.
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 7.4;
	cout << setprecision(20) << fixed << dValue << endl;

	long double lValue = 7.4;
	cout << setprecision(20) << fixed << lValue << endl;


	return 0;
}
