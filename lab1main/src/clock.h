#ifndef CLOCK_H_
#define CLOCK_H_
#include <iostream>
using namespace std;

class clockType {

	friend ostream& operator<< (ostream&, const clockType&);

private:
	int hr;
	int min;
	int sec;
	void beautify();
public:
	void setClock(const int& hour, const int& minute, const int& second);
	clockType(int hour, int minute, int second);
	clockType(int hour, int minute);
	clockType();
	clockType operator+(const clockType& two);

};

#endif /* CLOCK_H_ */
