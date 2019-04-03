/*
 * stock.cpp
 *
 *  Created on: Apr 1, 2019
 *      Author: apple
 */

#include "stock.h"
#include <iostream>
# include <string>
#include <sstream>
using namespace std;

ostream& operator<< (ostream& os , const stock& stk){
	os << stk.symbol << " "<< stk.cost << " " << stk.shares << endl;
	return os;
}

stock::stock(string sym, int c, int s) {
	symbol = sym;
	cost = c;
	shares = s;
}

void stock::generateStock(int index){
	symbol = randomStr(index);
	cost = randomNum();
	shares = randomNum();
}

int stock::randomNum(){
	return rand() % 99;
}

string stock::randomStr(int index) {
	string stockName ("A");
	 stockName= stockName + to_string(index);
    return stockName;
}



