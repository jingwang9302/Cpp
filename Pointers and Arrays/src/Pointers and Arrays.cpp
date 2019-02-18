//============================================================================
// Name        : Pointers.cpp
// Author      : Zoe
//Loop through an array using a pointer, with array element reference syntax
//Loop through an array by implementing a pointer
//Loop through an array, stopping by comparing two pointers
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string texts[]={"one","two","three"};
	string *pTexts = texts;

	//array no pointer
	for(int i=0;i< sizeof(texts)/sizeof(string);i++){
		cout<< texts[i]<<" ";
	}
	cout<<endl;

	//pointer array
	for(int i=0;i< sizeof(texts)/sizeof(string);i++){
		cout<< pTexts[i]<<" ";
	}
	cout<< endl;

	//pointer array
	for(int i=0;i< sizeof(texts)/sizeof(string);i++,*pTexts++){
		cout<< *pTexts<< " ";
	}
	cout<< endl;

	//pointer array
	string* pElement = &texts[0];
	string* pEnd = &texts[2];
	while(true){
		cout<< *pElement<< " ";
		if(pElement == pEnd){
			break;
		}
		pElement++;
	}

	return 0;
}
