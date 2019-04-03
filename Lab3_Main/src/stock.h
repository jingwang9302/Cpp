/*
 * stock.h
 *
 *  Created on: Apr 1, 2019
 *      Author: apple
 */

#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
using namespace std;

class stock {
	friend ostream& operator<< (ostream&, const stock&);

private:
	string symbol; int cost; int shares;

public:
	stock(string sym = "", int c=0, int s=0);
	void generateStock(int);
	string randomStr(int);
	int randomNum();

};

class stockNode{
public:
	stockNode * next;
	stock s;
	int count;
};

#endif /* STOCK_H_ */

