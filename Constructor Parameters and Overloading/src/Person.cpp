/*
 * Person.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: apple
 */

#include "Person.h"
#include <sstream>
using namespace std;


Person::Person() :name("unnamed"),age(0){}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

string Person:: toString() {
	stringstream ss;
	ss<< "Name: ";
	ss<< name;
	ss<<"Age: ";
	ss<< age;

	return ss.str();


}
