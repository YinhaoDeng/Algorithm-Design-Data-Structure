/*
In order to mutate the DNA, we need a class called Mutator. The Mutator class has a
virtual function mutate that takes in an Individual and an integer index k as parameter
and returns the offspring after mutation. 
*/

#ifndef MUTATOR_H
#define MUTATOR_H
#include <string>
#include "Individual.h"

class Mutator 
{
public:
    virtual void mutate(Individual* o, int k)=0;
};
#endif