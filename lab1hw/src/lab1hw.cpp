#include <iostream>
#include <complex>
#include <string>
#include <fstream>
#include "complexType.h"
using namespace std;


int main()
{

	ifstream infile("/Users/apple/Desktop/180a/complex.txt");
	complexType sum(0,0);
	complexType temp;

	while(infile >> temp){
		sum += temp;
	}
	cout << sum << endl;

//Another method, not using >>.
//	ifstream inFile("/Users/apple/Desktop/180a/complex.txt");
//	int a, b;
//	char x;
//	complexType sum(0, 0);
//	inFile >> sum;
//	while (inFile >> a >> b >> x) {
//		complexType tmp(a, b);
//		sum += tmp;
//		// sum = sum + tmp;
//	}
//	cout << sum << endl;

    ofstream output;
    output.open("/Users/apple/Desktop/180a/complexObj.txt");
    output << sum << endl;
    output.close();

    return 0;
}
