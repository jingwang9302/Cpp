//============================================================================
// Name        : stock.cpp
// Author      : Zoe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

class Stock{
private:
	string symbol;
	int cost;
	int share;
public:
	Stock(string symbol, int cost, int share){
		this->symbol = symbol;
		this->cost = cost;
		this->share = share;
	}

	Stock(string symbol,int cost){
		this->symbol = symbol;
		this->cost = cost;
	}

};

int main() {
	Stock s2("APPL", 209, 7);
	Stock s3("FB", 80);
	cout << s2.toString();
	cout << s3.toString();
	return 0;
}
