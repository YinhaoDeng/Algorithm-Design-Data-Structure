#include <vector>
#include "ReduceGeneric.h"
#include "ReduceGCD.h"

ReduceGCD::ReduceGCD() : ReduceGeneric() {};

int ReduceGCD::op(int test, int test1) {
    if (test == 0) 
        return test1; 
    return op(test1 % test, test); 
}