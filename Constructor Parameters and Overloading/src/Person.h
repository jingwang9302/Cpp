/*
 * Person.h
 *
 *  Created on: Feb 9, 2019
 *      Author: apple
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string name, int age);

	string toString();
};

#endif /* PERSON_H_ */
