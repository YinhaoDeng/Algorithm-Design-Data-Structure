#include <vector>
#include <cstdlib>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"

MapAbsoluteValue::MapAbsoluteValue() : MapGeneric() {};

int MapAbsoluteValue::function(int testcase) {
    testcase = abs(testcase);
    return testcase;
}