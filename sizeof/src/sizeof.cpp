//============================================================================
// Name        : sizeof.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string letters[][3] = {{"aewef", "bsd", "csdd"},{"dwefffef", "e", "fw"}};
	for(int i=0; i< sizeof(letters)/sizeof(letters[0]);i++){
		for (int j=0; j< sizeof(letters[0])/ sizeof(string);j++){
			cout << letters[i][j]<< " "<< flush;
		}
		cout<< endl;
	}

	return 0;
}
