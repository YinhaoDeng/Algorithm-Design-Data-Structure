#include "BitFlipProb.h"
#include <string>
using namespace std;

void BitFlipProb::mutate(Individual* o, int k)
{
    k=o->getLength();
    for(int i=0; i<o->getLength(); i++)
    {
        double j=rand() % 1;
        
        if(j>0 && j<1/k)
        {
            o->flipBit(j);
        }
    }
    
}