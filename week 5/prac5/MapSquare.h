#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <vector>
#include "MapGeneric.h"

class MapSquare : public MapGeneric
{
private:
    int function(int);
public:
    MapSquare();
};

#endif