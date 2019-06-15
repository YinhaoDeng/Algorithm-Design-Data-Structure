#include <vector>
#include "ReduceGeneric.h"

int ReduceGeneric::l = 0;

ReduceGeneric::ReduceGeneric() {};

int ReduceGeneric::map(std::vector<int> &a) {
    if ((a.size()-l) == 0) {
        l=0;
        return a[a.size()-1];
    } else if (l == 0) {
        a[l+1] = op(a[l],a[l+1]);
        l++;    
        return map(a);
    } else {
        a[l+1]= op(a[l], a[l+1]);
        l++;
        return map(a);
    }
}