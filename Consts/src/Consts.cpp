//============================================================================
// Name        : Consts.cpp
// Author      : 
// Description : three kinds of consts
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name;
public:
	void setName(string name){
		this->name = name;
	}
	void speak()const{
		cout<< "My name is: "<< name<< endl;
	}
};


int main() {
	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;
	int * pValue = &value;
	cout<< *pValue << endl;
	int number = 11;
	pValue = &number;//Error with this: int * const pValue = &value;
				 	 //(const pointer to an int,pointing cannot change)
	*pValue = 12; //Error with this: const int *pValue = &value;
	cout<< *pValue<< endl;

	return 0;
}
