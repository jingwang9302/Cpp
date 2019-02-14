/*
 * Cat.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: apple
 */

#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat() {
	name = "Lisa";
}

void Cat::setName(string newName){
	name = newName;
}

string Cat::getName(){
	return name;
}

