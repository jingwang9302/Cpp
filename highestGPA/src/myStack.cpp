/*
 * myStack.cpp
 *
 *  Created on: Apr 5, 2019
 *      Author: apple
 */
#include <stdio.h>
#include "myStack.h"
#include <iostream>
using namespace std;

myStack::myStack() {
	maxStackSize = 50;
	stackTop =0;
	list = new studentInfo[maxStackSize];
}

void myStack::initializeStack(){
	stackTop = 0;
}
void myStack::push(const studentInfo& newStudent){
	if(!isFull()){
		list[stackTop] = newStudent;
		stackTop++;
	} else {
		cout<< "the stack is full"<< endl;
	}
}
void myStack::print(){
	for(int j=0;j<stackTop;j++){
		cout << list[j].name << " "<<list[j].gpa<< endl;
	}
}
bool myStack::isEmpty(){
	return(stackTop == 0);
}
bool myStack::isFull(){
	return (stackTop == maxStackSize);
}
