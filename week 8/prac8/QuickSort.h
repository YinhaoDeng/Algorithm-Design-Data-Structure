#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort: public Sort
{
    public:
    int partition(int arr[], int low, int high);
    void quickSort(int arr[], int low, int high);
};
#endif