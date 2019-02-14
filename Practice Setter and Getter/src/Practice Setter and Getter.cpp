//============================================================================
// Name        : Practice.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {

	Cat cat1;
	cout<< "name before setter: "<< cat1.getName()<< endl;
	cat1.setName("Nancy");
	cout<< "name after setter: "<< cat1.getName()<< endl;

	return 0;
}
