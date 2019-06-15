#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include <vector>
#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric
{
private:
    bool game(int);
public:
    FilterNonPositive();  //tick out non positive numbers
};

#endif