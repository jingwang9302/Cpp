/*
 * studentInfo.h
 *
 *  Created on: Apr 5, 2019
 *      Author: apple
 */

#ifndef STUDENTINFO_H_
#define STUDENTINFO_H_
#include <string>
using namespace std;

class studentInfo {

friend ostream& operator<< (ostream&, const studentInfo&);

public:
	double gpa;
	string name;
	studentInfo();

};

#endif /* STUDENTINFO_H_ */
