#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric
{
private:
    virtual int function(int) = 0;
protected:
    static int l;
public:
    MapGeneric();
    std::vector<int> map(std::vector<int> &a);
};

#endif