#include <vector>
#include <cmath>
#include "MapGeneric.h"
#include "MapSquare.h"

MapSquare::MapSquare() : MapGeneric() {};

int MapSquare::function(int test) {
    test = pow(test,2);
    return test;
}