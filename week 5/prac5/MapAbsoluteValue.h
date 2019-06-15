#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include <vector>
#include "MapGeneric.h"

class MapAbsoluteValue : public MapGeneric
{
private:
    int function(int);
public:
    MapAbsoluteValue();  //turn numbers to positive
};

#endif