#include <vector>
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive() : FilterGeneric() {};

bool FilterForTwoDigitPositive::game(int test) {
    bool you = false;
    int count = 0;
    
    while (test != 0) {   
      count++;  
      test /= 10;
    } 

    if (count != 2) {
        you = true;
    }
    return you;
}