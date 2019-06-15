#include <vector>
#include "FilterGeneric.h"
#include "FilterOdd.h"

FilterOdd::FilterOdd() : FilterGeneric() {};

bool FilterOdd::game(int test) { //check
    bool your = false;				
    if ((test % 2) == 0) {
        your = true;
    }
    return your;
}