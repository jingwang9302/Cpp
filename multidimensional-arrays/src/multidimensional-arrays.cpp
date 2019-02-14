//============================================================================
// Name        : multidimensional-arrays.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int main() {
	int table[3][3] = {
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};
	for(int i=0;i<3; i++){
		for(int j=0; j<3; j++){
			cout << table[i][j]<< " "<< flush;
		}
		cout<< endl;
	}

	return 0;
}
