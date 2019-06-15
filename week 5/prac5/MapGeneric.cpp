#include <vector>
#include "MapGeneric.h"

int MapGeneric::l = 0;

MapGeneric::MapGeneric() {};

std::vector<int> MapGeneric::map(std::vector<int> &a) {
    if ((a.size()-l) == 0) {
        a[l] = function(a[l]);
        l=0;
        return a;
        
    } else {
        a[l] = function(a[l]);
        l++;    
        return map(a);
    }
}