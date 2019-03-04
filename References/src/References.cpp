//============================================================================
// Name        : References.cpp
// Author      : 
// reference is the value itself, changing the reference
//is actually change the value itself.
//============================================================================

#include <iostream>
using namespace std;
void changeSomething(double& value){
	value = 123.4;
}

int main() {
	int value1 = 8;
	int& ref = value1;
	ref = 10;

	cout << "value1: "<< value1 <<endl;
	cout << "ref of value1 "<< ref <<endl;

	double value = 4.321;
	changeSomething(value);
	cout<< value<< endl;

	return 0;
}
