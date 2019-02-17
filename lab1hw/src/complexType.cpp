/*
 * complexType.cpp
 *
 *  Created on: Feb 12, 2019
 *      Author: apple
 */
#include <iostream>
#include "complexType.h"
using namespace std;

complexType::complexType() {
	realPart = 0;
	imagePart=0;
}

complexType::complexType(int real, int imag){
	realPart = real;
	imagePart = imag;
}
complexType operator+(complexType& one, complexType& two){
	complexType sum;
	sum.realPart = one.realPart+ two.realPart;
	sum.imagePart=one.imagePart+two.imagePart;
	return sum;
}
ostream& operator<< (ostream& os, const complexType& complex){
	os << "the sum of all complex number is: " << complex.realPart<< "+"<<complex.imagePart<< "i"<< endl;
	return os;
}


