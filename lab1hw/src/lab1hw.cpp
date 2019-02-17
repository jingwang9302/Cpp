#include <iostream>
#include <complex>
#include <string>
#include <sstream>
#include "complexType.h"
using namespace std;


int main()
{
    istringstream file( "3+5i \n +2-3i \n 45 \n 11+22i \n 33-44i \n 0+0i \n 0-55j \n -3+5i \n" ) ;

    string line ;
    while( getline( file, line ) )
    {
        istringstream stm(line) ;
        int real, imag ;
        char ch ;
        if( stm >> real >> imag >> ch && ch == 'i' && !( stm >> ch ) )
            cout << complexType<int>(real,imag) << '\n' ;
        else cerr << "badly formed number '" << line << "'\n" ;
    }


    /*
    ofstream output;
    output.open("/Users/apple/Desktop/complexObj.txt");
    output<<"Sum of all complex number: ";
    output.close();
     */
    return 0;
}
