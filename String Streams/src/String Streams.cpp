#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string name = "Bob";
	int age = 32;

	stringstream ss;

	ss<< "name is: ";
	ss<< name;
	ss<< "Age is: ";
	ss << age;

	string info = ss.str();

	cout<< ss.str() << endl;

	cout << info << endl;

	return 0;
}
