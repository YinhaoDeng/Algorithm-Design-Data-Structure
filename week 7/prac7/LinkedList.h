#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
private:
    Node* head;
public:
    LinkedList();
    LinkedList(int* a, int length);
    void addFront(int newItem); // The function inserts a new node, containing the newItem, at the beginning of the list.
    void addEnd(int newItem); //The function inserts a new node, containing the newItem, at the end of the list.
/*
The function inserts a new
node, containing the newItem, such that it is the position-th member of the list.
i.e. we assume the first element of the list is in position 1. If position is larger than
the size of the list, the new item is added to the end of the list. If position< 1, the
new item is added at the beginning of the list.
*/
    void addAtPosition(int pos,int newItem);
/*
The function searched the list for the item, and if found,
both prints the position of the of the item (followed by a space) and returns the
position of the item in the list (positions start from 1). If not found, both prints 0
(followed by a space) and returns 0. Note that the returning type is different from
what was explained in the search function in the lecture.
*/
    int search(int item);
    int searchIn(int item);
    void deleteFront();//The function deletes the first element of the list.
    void deleteEnd(); //The function deletes the last element of the list
/*
 The function deletes the element at the
given position of the list. If the position¡1 or it is larger than the size of the list,
only print ”outside range”.
*/
    void deletePosition(int pos);
    int getItem(int pos);
    void printItems();// The function prints the value of the items of the list from head to tail. In case of an empty list, it does not print anything
    ~LinkedList();
};

#endif