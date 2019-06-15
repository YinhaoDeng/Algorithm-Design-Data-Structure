#include "BubbleSort.h"
#include <array>

void BubbleSort::bubblesort(int arr[], int arrayLength)
{
    int i,j;
    for(i=0; i<arrayLength; i++) //a function to implement bubble sort
    {
        //last i elements are already in place
        for(j=0; j<arrayLength-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}