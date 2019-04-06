/*
 * myStack.h
 *
 *  Created on: Apr 5, 2019
 *      Author: apple
 */

#ifndef MYSTACK_H_
#define MYSTACK_H_
#include <string>
#include "studentInfo.h"

using namespace std;


class myStack {
private:
	int maxStackSize;
	int stackTop;
	studentInfo *list;
public:
	myStack();
	void initializeStack();
	void push(const studentInfo&);
	void print();
	bool isEmpty();
	bool isFull();

};


#endif /* MYSTACK_H_ */
