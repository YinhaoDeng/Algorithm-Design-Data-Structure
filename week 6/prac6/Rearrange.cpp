#include "Rearrange.h"
#include <string>
using namespace std;

/*
In this class, the mutate function rearranges the list. 
The function willselect the k-th digit in the bitstring (again, counting in circles). 
This digit and all digits after it (all the way to the tail) will be moved to the start of the list. 
For example, if you were rearranging the list (a,b,c,d,e) and k = 3, 
the function would return an Individual with the list (c,d,e,a,b).
*/

void Rearrange::mutate(Individual* o, int k)
{
    while(k> o->getLength())
    k = k - o->getLength(); //adjust k to the right value

    string mystring= o->getString();
    string tempfront = mystring.substr(k-1);
    string result = tempfront + mystring.substr(0,k-1);
    Individual resultstring(result);
    *o = resultstring;
}