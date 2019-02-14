/*
 * Cat.cpp
 *
 *  Created on: Feb 5, 2019
 *      Author: apple
 */

#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(){
	cout << "Cat created" << endl;
	happy == true;
}

void Cat::speak(){
	if(happy) {
		cout << "Meow" << endl;
	} else {
		cout << "Ssssssss" << endl;
	}
}
