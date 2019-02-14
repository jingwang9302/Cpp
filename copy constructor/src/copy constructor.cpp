//============================================================================
// Name        : copy.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class example
{
	private:

		int x;
	public:
	example (int a)
	{
		x = a;
	}
	example (example &b) //Don't understand. Pointer???
	{
		x = b.x;
	}
	int display()
	{
		return x;
	}
};

int main()
{
	example c1(2);
	example c2(c1);
	example c3 = c1;
	example c4 = c2;
	cout << "eg1. " << c1.display() << ". Parameterized constructor"<<endl;
	cout << "eg2. " << c2.display() <<". copy constructor" << endl;
	cout << "eg3. " << c3.display() << endl;
	cout << "eg4. " << c4.display() << endl;

}

