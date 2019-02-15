//============================================================================
// Name        : string_npos.cpp
// Author      : ziyi
// Description : string::npos represent where the string ends
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//calculate how many different char in a string
	string b;
	getline(cin,b);
	int count;
		for(int i=0;i<127;i++)
			if(b.find(i)!=string::npos)
				count++;
		cout<< count<<endl;

	//find the position of 'olivia',only the first position will be found;
	string name("olivia is a elegant lady, olivia is awesome");
	int pos=name.find("olivia");
	if(pos==string::npos)
		cout<<"olivia not found!\n";
	else cout<<"olivia found at position: "<<pos<<endl;
return 0;
}



