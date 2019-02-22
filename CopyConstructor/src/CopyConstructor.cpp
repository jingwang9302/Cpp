//============================================================================
// Name        : CopyConstructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	Animal(){
	}
	//copy constructor
	Animal(Animal& other){
		this->name = other.name;
	}
	void speak() const{
		cout<< "My name is: "<< name<< endl;
	}
};


int main() {
	Animal animal1;
	animal1.setName("Ana");

	Animal animal2(animal1);


	animal1.speak();
	animal2.speak();

	return 0;
}
