//============================================================================
// Name        : Pointers.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string texts[]={"one","two","three"};
	for(int i=0;i<sizeof(texts)/sizeof(string);i++){
		cout<< texts[i] << "  ";
	}
	string *pTexts = texts;
	for(int i=0; i<sizeof(texts)/sizeof(string);i++){
		cout<< pTexts[i]<< "  ";
	}
//pointer in the array
	for(int i=0;i< sizeof(texts)/sizeof(string);i++,pTexts++){
		cout<< *pTexts<< "  ";

	}
	cout<< 90/60<<endl;

	return 0;
}
