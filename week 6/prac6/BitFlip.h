#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
#include <string>

class BitFlip : public Mutator
{
public:
    void mutate(Individual* o, int k);
};
#endif