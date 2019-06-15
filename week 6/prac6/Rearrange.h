#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"
#include <string>

class Rearrange: public Mutator
{
public:
    void mutate(Individual* o, int k); 
};
#endif