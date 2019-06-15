#include <vector>
#include "FilterGeneric.h"
#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive() : FilterGeneric() {};

bool FilterNonPositive::game(int test) {
    bool your = false;
    if (test > 0) {
        your = true;
    }
    return your;
}