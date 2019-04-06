//============================================================================
// Name        : highestGPA.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include "studentInfo.h"
#include "myStack.h"
using namespace std;


int main() {
	studentInfo newStudent;
	double highGpa = 0,gpa;
	string name;

	myStack studentStack;
	ifstream infile;
	infile.open("/Users/apple/Desktop/studentGpa.txt");
	if(!infile){
		cout<< "The input file does not exist." << endl;
	}
	while(!infile.eof()){
		studentInfo newStudent;
		infile>> gpa >> name;
		newStudent.gpa = gpa;
		newStudent.name = name;

		if(gpa > highGpa){
			studentStack.initializeStack();
			if(!studentStack.isFull()){
				studentStack.push(newStudent);
				highGpa = gpa;
			}
		} else if(gpa == highGpa){
			//push in another name
			if(!studentStack.isFull()){
				studentStack.push(newStudent);
			}
		}
	}


	//print stack
	studentStack.print();


	return 0;
}
