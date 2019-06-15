#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    int arr1[7]={4, -5, -1, 5 ,7, -3, 9};
    LinkedList *list = new LinkedList(arr1, 7);
    LinkedList newList= list->filterPositive();
    newList.printItems();
    
    int arr2[3]= {-1, -6, 8};
    list = new LinkedList(arr2, 3);
    newList= list->filterPositive();
    newList.printItems();

    int arr3[3]= {-1, 6, -2};
    list = new LinkedList(arr3, 3);
    newList= list->filterPositive();
    newList.printItems();

    int arr4[3]= {1, 4, -9};
    list = new LinkedList(arr4, 3);
    newList= list->filterPositive();
    newList.printItems();

}
