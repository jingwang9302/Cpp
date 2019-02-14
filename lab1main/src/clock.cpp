#include "clock.h"
#include <sstream>
using namespace std;

void clockType::setClock(const int& hour, const int& minute, const int& second){
	hr = hour;
	min = minute;
	sec = second;
}
clockType::clockType(int hour, int minute, int second) {
	hr = hour;
	min = minute;
	sec = second;
	beautify();
}
clockType::clockType(int hour, int minute){
	hr = hour;
	min = minute;
	sec = 0;
	beautify();
}
clockType::clockType(){
	hr = 0;
	min = 0;
	sec = 0;
	beautify();
}


void clockType::beautify(){
	int s, m;
	s=sec;
	m=s/60 + min;
	sec = s%60;
	min = (s/60 + min)%60;
	hr = m/60+hr;
}


clockType clockType::operator+(const clockType &two){

	clockType temp(hr + two.hr, min +two.min, sec + two.sec);
	temp.beautify();
	return temp;


}

ostream& operator<< (ostream& os, const clockType& clock){
	os << "Hour is: " << clock.hr  << flush;
	os << "; Minute is: " << clock.min  << flush;
	os << "; Second is: " << clock.sec  << endl;
	return os;
}














