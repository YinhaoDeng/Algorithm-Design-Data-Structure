#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include <vector>
#include "MapGeneric.h"

class MapTriple : public MapGeneric
{
private:
    int function(int);
public:
    MapTriple();
};

#endif