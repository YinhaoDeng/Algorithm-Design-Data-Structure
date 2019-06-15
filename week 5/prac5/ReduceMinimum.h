#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include <vector>
#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric
{
private:
    int op(int,int); //binary 
public:
    ReduceMinimum();
};

#endif