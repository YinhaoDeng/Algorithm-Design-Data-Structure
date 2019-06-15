#ifndef FILTERODD_H
#define FILTERODD_H
#include <vector>
#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric
{
private:
    bool game(int);
public:
    FilterOdd();
};

#endif