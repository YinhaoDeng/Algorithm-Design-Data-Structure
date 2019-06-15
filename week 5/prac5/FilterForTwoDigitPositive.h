#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include <vector>
#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric
{
private:
    bool game(int);
public:
    FilterForTwoDigitPositive();
};

#endif