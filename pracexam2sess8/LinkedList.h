#include "Node.h"

#ifndef LINKEDLIST
#define LINKEDLIST

class LinkedList {
public:
	LinkedList();
	LinkedList(int*, int);
    void printItems();
    LinkedList filterPositive();

private:
    Node * head;
};

#endif //LINKEDLIST
