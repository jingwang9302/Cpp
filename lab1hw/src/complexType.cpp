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

complexType complexType::operator+(complexType& one){
	return complexType(one.realPart + this->realPart, one.imagePart + this->imagePart);
}

void complexType::operator+= (complexType& one){
	this->realPart = this->realPart + one.realPart;
	this->imagePart = this->imagePart + one.imagePart;
}

ostream& operator<< (ostream& os, const complexType& complex){
	os << "the sum of all complex number is: " << complex.realPart << complex.imagePart << "i"<< endl;
	return os;
}

istream& operator>> (istream& is, complexType& complex){
	char ch;
	is >> complex.realPart;
	is >> complex.imagePart;
	is >> ch;

	return is;


}


