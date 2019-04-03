/*
 * stockLinkedList.h
 *
 *  Created on: Apr 1, 2019
 *      Author: apple
 */

#include "stock.h"
#ifndef STOCKLINKEDLIST_H_
#define STOCKLINKEDLIST_H_

class stockLinkedList {
private:
	stockNode * head;
	stockNode * tail;
	int count;

public:
	stockLinkedList();
	stockNode * getHead();
	void print();
	void reverse_print(stockNode *); //recursively reverse print
	void buildList();
	stockNode * returnMiddleList();
	stockLinkedList split(stockLinkedList&);
	stock getRandomStock(int);

};

#endif /* STOCKLINKEDLIST_H_ */
