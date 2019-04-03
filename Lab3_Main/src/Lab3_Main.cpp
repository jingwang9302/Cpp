//============================================================================
// Name        : Lab3_Main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
# include "stock.h"
# include "stockLinkedList.h"
using namespace std;


int main() {
	stockLinkedList stkList, firstHalf, secondHalf;

	//build a linked list
	stkList.buildList();
	cout<< "Print the List: "<< endl;
	stkList.print();
	stkList.reverse_print(stkList.getHead());

	//return the middle node of a linked list
	stockNode * middle = stkList.returnMiddleList();
	cout<< "the middle stock is: "<< middle->s << endl;
	cout<< "the count of the middle node is: "<< middle->count << endl;

	//split the list in half and half

	cout<< "print first half of the list"<< endl;
	firstHalf = stkList.split(secondHalf);
	firstHalf.print();
	cout<< "print second half of the list"<< endl;
	secondHalf.print();
	return 0;
}
