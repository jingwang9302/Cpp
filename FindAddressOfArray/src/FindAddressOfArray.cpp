//============================================================================
// Name        : FindAddressOfArray.cpp
// Author      :ziyi
//address and value in the array
//============================================================================

#include <iostream>
using namespace std;


int main() {

	int a[5] = {10,20,30,40,50};
	cout<< a<<" "<<a+5<<endl;   //increase by 4 bits
	cout<<*a<<endl;             //first element in the array
	cout<< &a<<endl;            //the address of the array
	//cout<< &(a+1);
	cout << *(a+2)<< endl;
	string b[3]= {"cat","dog","mouse"};
	cout<< b<<"   "<<b+1<<" "<<sizeof(string)<< endl;
	cout<<"========================="<<endl;
	int *p = new int(3);
	int *q = p;
	*q = 5;
	cout << *p << " @@@ " << *q << endl;
	delete q;
	cout << *p << " ### " << *q << endl;



	return 0;

}
