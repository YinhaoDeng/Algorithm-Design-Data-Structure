#include "Sort.h"
using namespace std;
#include <iostream>
#include <iterator>

void Sort::swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

