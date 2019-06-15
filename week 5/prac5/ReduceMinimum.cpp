#include <vector>
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum() : ReduceGeneric() {};

int ReduceMinimum::op(int test, int test1) {  //return the mini number
    if (test <= test1) {
        return test;
    } else {
        return test1;
    }
}