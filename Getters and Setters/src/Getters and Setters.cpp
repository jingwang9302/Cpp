//============================================================================
// Name        : Getters.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Person.h"

int main() {
	Person person;
	cout<< "Name of person with get method:" << person.getName()<< endl;
	person.setName("GG");
	cout << person.toString() << endl;

	return 0;
}
