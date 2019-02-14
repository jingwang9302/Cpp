//============================================================================
// Name        : pointer2.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void function1(int* x){

	cout<< *x << endl;
	*x=10;
	cout<< *x << endl;
}

int main() {
	int a = 8;
	function1(&a);
	cout<< a<< endl;
	return 0;
}

