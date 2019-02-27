//============================================================================
// Name        : selectionSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[5]  = {2,6,1,9,5};
	for (int j =0; j<4;j++){
		int min = a[j];
		int m = j;
		for (int i = j+1; i < 5; i++){
			if (a[i] < min){
				min = a[i];
				m = i;

				int temp;
				temp = a[j];
				a[j] = a[m];
				a[m] = temp;
			}
		}

	}
	for (int k = 0; k<5;k++){
		cout<< a[k]<< " "<< flush;
	}
	return 0;
}

//void swap(){

//}
