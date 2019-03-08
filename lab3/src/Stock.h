/*
 * Stock.h
 *
 *  Created on: Mar 7, 2019
 *      Author: apple
 */

#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
using namespace std;

class Stock {
private:
	string symbol; int cost; int shares;

public:
	Stock(string sym, int c, int s);
};

//is a
class stockNode : public Stock{
public:
	stockNode *prev;
	stockNode *next;
};

#endif /* STOCK_H_ */
