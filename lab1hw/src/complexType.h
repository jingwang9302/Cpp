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

	friend ostream& operator<< (ostream&, const complexType&);
	friend istream& operator>> (istream&, complexType&);

private:
	int realPart;
	int imagePart;
public:
	complexType(int real, int imag);
	complexType();
	complexType operator+(complexType&);
	void operator+=(complexType&);



};

#endif /* COMPLEXTYPE_H_ */
