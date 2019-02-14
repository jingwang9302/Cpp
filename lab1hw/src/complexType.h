/*
 * complexType.h
 *
 *  Created on: Feb 12, 2019
 *      Author: apple
 */

#ifndef COMPLEXTYPE_H_
#define COMPLEXTYPE_H_
#include <iostream>
using namespace std;


class complexType {
	friend complexType operator+(complexType& one, complexType& two);

private:
	double realPart;
	double imagePart;
public:
	complexType(double real, double imag);
	complexType();


};

#endif /* COMPLEXTYPE_H_ */
