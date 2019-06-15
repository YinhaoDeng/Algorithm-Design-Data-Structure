#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"

MapTriple::MapTriple() : MapGeneric() {};

int MapTriple::function(int test) {
    test = 3*test;
    return test;
}