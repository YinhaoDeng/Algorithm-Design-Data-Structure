#include <vector>
#include "FilterGeneric.h"

int FilterGeneric::l = 0;

FilterGeneric::FilterGeneric() {};

std::vector<int> FilterGeneric::map(std::vector<int> &a) {
    int s = a.size()-1;
    if ((a.size()-l) == 0) {

        l=0;
        return a;
    } else {
        if (game(a[a.size()-l-1]) == true) {  
            a.erase(a.begin()+s-l);
            l--;
            s--;
        }
        l++;    
        return map(a);
    }
}