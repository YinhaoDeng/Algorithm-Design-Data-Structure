#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iterator>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"


int main() {
    std::string n;
    getline(std::cin,n);
    std::istringstream iss(n);
    int number;
    std::vector<int> list;
    while ( iss >> number ) {
        list.push_back( number );
        if (iss.peek() == ',') {
            iss.ignore();
        }
    }
    MapTriple a;
    MapSquare b;
    MapAbsoluteValue c;
    FilterForTwoDigitPositive d;
    FilterNonPositive e;
    FilterOdd f;
    ReduceMinimum g;
    ReduceGCD h;
    c.map(list);
    a.map(list);
    d.map(list);
    f.map(list);
    std::vector<int> list1 = list;
    std::cout << g.map(list) << " " << h.map(list1) << std::endl;
}