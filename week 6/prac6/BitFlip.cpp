#include "BitFlip.h"
#include "Individual.h"
#include <string>
using namespace std;

void BitFlip::mutate(Individual* o, int k) //If k is greater than the length of the list, we will count in circles. For example, if the length of the list is 10 and k = 12, then the mutate function will flip the second digit.
{
    while (k > o->getLength())
        k = k- o->getLength(); //modules
    
   if(k> o->getLength())
   {
       o->flipBit(k - o->getLength());
   }else{
       o ->flipBit(k);
   }
}