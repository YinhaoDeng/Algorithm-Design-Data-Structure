#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include <vector>
#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric
{
private:
    int op(int,int);
public:
    ReduceGCD();
};

#endif