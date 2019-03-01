//============================================================================
// Name        : Reversing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char text[] = "This is a reversing string.";
	int nChar = sizeof(text) - 1;
	char *pStart = text;
	char *pEnd = text + nChar - 1;

	while(pStart < pEnd){
		swap(*pStart, *pEnd);
		*pStart++;
		*pEnd--;

	}
	cout << text << endl;
	return 0;
}
void swap(char* a, char* b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
