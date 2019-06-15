#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"


class BitFlipProb : public Mutator
{
public:
    void mutate(Individual* o, int k);
};
#endif