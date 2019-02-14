/*
 * Cat.h
 *
 *  Created on: Feb 9, 2019
 *      Author: apple
 */

#ifndef CAT_H_
#define CAT_H_
#include <iostream>
using namespace std;

class Cat {
private:
	string name;

public:
	Cat();
	void setName(string newName);
	string getName();

};

#endif /* CAT_H_ */
