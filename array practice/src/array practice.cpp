//============================================================================
// Name        : array.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 * print out a table:
 * 1 2 3 4 5 6 7 8 9 10
 * 2 4 6 8 10        20
 * 3 6 9             30
 * 4 8               40
 * 5                 50
 * 6                 60
 * 7
 * 8
 * 9
 * 10
 */

#include <iostream>
using namespace std;


int main(){
	int mutiArray[10][10];
	for (int i=1; i<11; i++){
		for (int j=1; j<11; j++){
			mutiArray[i][j] = i * j;
			cout << mutiArray[i][j]<< " "<< flush;
		}
		cout << endl;
	}


	return 0;
}
