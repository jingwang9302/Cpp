//============================================================================
// Name        : Linked_list.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct nodeType{
	int info;
	nodeType *link;
};

//Forward list needs *first and *last
nodeType* buildListforward(){
	nodeType * first, *last, *newNode;
	int num;
		cout << "Enter a list of integers ending with -999." << endl;
		cin >> num;
		first = NULL;

		while (num != -999){
			newNode = new nodeType;
			newNode-> info = num;
			newNode -> link = NULL;

			if(first ==NULL){
				first = newNode;
				last = newNode;
			} else {
				last -> link = newNode;
				last = newNode; // set last so it points to teh actual last node in the list
			}
		}
	return first;
}

//Backward list only needs the *first
nodeType *buildListBackward(){
	nodeType *first, *newNode;
	int num;
	cout<< "Enter a list"<< endl;
	cin >> num;
	first = NULL;

	while (num != -999){
		newNode = new nodeType;
		newNode->info = num;
		newNode->link = NULL;

		first = newNode;


	}

	return first;
}

int main() {
	buildListforward();
	buildListBackward();
	return 0;
}
