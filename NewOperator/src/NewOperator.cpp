//============================================================================
// Name        : NewOperator.cpp
//
// Description : Memory allocate when call new function
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name;
public:
	Animal(){
		cout<< "Animal Created"<< endl;
	}
	Animal(const Animal& other){
		this->name = name;
		cout<< "Animal Created by copy constructor"<< endl;
	}
	~Animal(){
		cout<< "Destructor called"<< endl;
	}
	void setName(string name){
		this->name = name;
	}
	void speak(){
		cout<< "My name is: "<< name<< endl;

	}
};

Animal *createAnimal(){
	Animal *pAnimal = new Animal();
	pAnimal->setName("Guagua");
	return pAnimal;

}

int main() {

	Animal *pFrog = createAnimal();
	pFrog->setName("Guaga");
	pFrog->speak();

	delete pFrog;


	return 0;
}
