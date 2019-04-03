/*
 * stockLinkedList.cpp
 *
 *  Created on: Apr 1, 2019
 *      Author: apple
 */

#include "stockLinkedList.h"
#include "stock.h"
#include <iostream>
# include <string>

stockLinkedList::stockLinkedList() {
	head = NULL;
	tail = NULL;
	count= 0;
}
stockNode * stockLinkedList::getHead(){
	return this->head;
}

void stockLinkedList::print(){
	stockNode * current;
	current = head;
	while(current != NULL){
		cout<< current->s << endl;
		current = current->next;

	}
}

void stockLinkedList::reverse_print(stockNode * p){
	if(p!= NULL){
		reverse_print(p->next);
		cout<< p->s <<endl;
	}
}
void stockLinkedList::buildList(){
	stockNode * newStockNode;
	int num = 1;
	while(num < 21){
		newStockNode = new stockNode;
		newStockNode->s = getRandomStock(num);
		newStockNode->next = head;
		num++;
		head = newStockNode;
	}

}

stock stockLinkedList::getRandomStock(int num){
	stock newStock;
	newStock.generateStock(num);
	return newStock;
}


stockNode * stockLinkedList::returnMiddleList(){
	stockNode *fast = head;
	stockNode *slow = head;
	count = 1;
	while (fast != NULL && fast->next->next !=NULL){
		fast = fast->next->next;
		slow = slow-> next;
		count = count +1;
	}
	slow->count = count;
	return slow;
}

stockLinkedList stockLinkedList::split(stockLinkedList& secondHalf){
	stockNode * middle = returnMiddleList();
	if (middle!=NULL){
		secondHalf.head = middle->next;
		secondHalf.tail = tail;
		this->tail = middle;
		middle->next = NULL;
	}
	return *this;
}


