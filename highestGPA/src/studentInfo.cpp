/*
 * studentInfo.cpp
 *
 *  Created on: Apr 5, 2019
 *      Author: apple
 */

#include "studentInfo.h"
#include <iostream>
using namespace std;

ostream& operator<< (ostream& os, const studentInfo& student){
	os << student.name<< " "<< student.gpa<< endl;
	return os;
}
studentInfo::studentInfo() {
	gpa = 0;
	name= "";

}



