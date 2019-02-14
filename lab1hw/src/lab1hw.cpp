#include <iostream>
#include <fstream>
#include <string>
#include "complexType.h"
using namespace std;

int main() {
    ifstream input;
    input.open("/complex.txt");
    string line;

    while( getline( input, line ) ) {
        cout<<line<<'\n';
    }

    return 0;
}
