/*
 * Cat.cpp
 *
 *  Created on: Feb 5, 2019
 *      Author: apple
 *      define a class, function,constructor and destructor
 */

#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat() {
	cout<< "Cat created." << endl;
	happy =true;
}
Cat:: ~Cat(){
	cout<<"Cat destroied." << endl;
}
void Cat::speak(){
	if(happy){
		cout<<"Meow"<<endl;
	} else {
		cout << "Ssss"<< endl;
	}
}
