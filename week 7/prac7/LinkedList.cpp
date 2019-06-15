#include "LinkedList.h"
#include <cstddef>
#include <iostream>
#include <limits>
//implement a default constructor for LinkedList
LinkedList::LinkedList() 
{
    head = new Node();
    head->setNext(nullptr);
}
//implement a constructor takes int pointer lish and length as inputs
LinkedList::LinkedList(int* a, int length) 
{
    head = new Node();
    for (int i = 0; i < length; i++) {
        int* he = new int;
        he = a+i;
        if (i == 0) {
            addFront(*he);
        } else {
            addEnd(*(a+i));
        }
    }
}


//add element to the front
void LinkedList::addFront(int newItem) 
{
    if (!head->getData()) {
        head->setData(newItem);
    } else {
        Node* tempHolder = new Node();
        tempHolder->setData(newItem);
        tempHolder->setNext(head);
        head = tempHolder;
    }
}


//end element to the end
void LinkedList::addEnd(int newItem) 
{
    Node* tempHolder = new Node();
    Node* last = head;
    tempHolder->setData(newItem);
    tempHolder->setNext(nullptr);
    if (head->getNext() == nullptr) {
        head->setNext(tempHolder);
    } else {
        while (last->getNext() != nullptr) {
            last = last->getNext();
        }
        last->setNext(tempHolder);
    }
}

//add element at pos
void LinkedList::addAtPosition(int pos, int newItem) 
{
    Node* tempHolder = new Node();
    Node* lookfor = head;
    int count = 2;
    if (pos <= 1) {
        addFront(newItem);
    } else {
        while ((count < pos) && (lookfor->getNext() != nullptr)) {
            lookfor = lookfor->getNext();
            count++;
        }
        tempHolder->setData(newItem);
        tempHolder->setNext(lookfor->getNext());
        lookfor->setNext(tempHolder);
    }
}
//implement a function to search the list for the item
int LinkedList::search(int item) 
{
    Node* lookfor = head;
    int pos = 1;
    while((lookfor->getData() != item)&&(lookfor->getNext()!=nullptr)) {
        lookfor = lookfor->getNext();
        pos++;
    }
    if ((lookfor->getNext()==nullptr)&&(lookfor->getData() != item)) {
        std::cout<<"0"<<" ";
        return 0;
    } else {
    	//for printing in the correct mode 
        std::cout<<pos<<" ";
        return pos;
    }
}

//implement a function for both prints the value of the item (fol- lowed by a space) and returns the value of the item at the given position of the list
int LinkedList::getItem(int pos) 
{
    Node* lookfor = head;
    int count = 1;
    int limit = std::numeric_limits<int>::max();
    if (pos < 1) {
        std::cout<<limit<<" ";
        return limit;
    } else if (pos == 1) {
        std::cout<<head->getData()<<std::endl;
        return head->getData();
    } else {
        while ((count < pos) && (lookfor->getNext() != nullptr)) {
            lookfor = lookfor->getNext();
            count++;
        }
        if (searchIn(lookfor->getData()) < pos) {
            std::cout<<limit<<" ";
            return limit;
        }
        std::cout<<lookfor->getData()<<" ";
        return lookfor->getData();
    }
}

//search the item
int LinkedList::searchIn(int item) 
{
    Node* lookfor = head;
    int pos = 1;
    while((lookfor->getData() != item)&&(lookfor->getNext()!=nullptr)) {
        lookfor = lookfor->getNext();
        pos++;
    }
    if ((lookfor->getNext()==nullptr)&&(lookfor->getData() != item)) {
        return 0;
    } else {
        return pos;
    }
}

//delete the head element
void LinkedList::deleteFront() 
{
    Node* tempHolder = head;
	head = head->getNext(); //move list head to the next node
	free(tempHolder);
}
//delete the end element
void LinkedList::deleteEnd() 
{
    Node* lookfor = head;
    Node* last = head;
    while (lookfor->getNext() != nullptr) {   
            lookfor = lookfor->getNext();   //move the head to the next node
    }
    while (last->getNext() != lookfor) {
            last = last->getNext();
    }
    last->setNext(nullptr);
    free(lookfor);
}

void LinkedList::deletePosition(int pos) 
{
    Node* lookfor = head;
    Node* last = head;
    int count = 1;
    if (pos < 1) {  
        std::cout<<"outside range"<<" ";
    } else if (pos == 1) {
        deleteFront();
    } else {
        while ((count < pos) && (lookfor->getNext() != nullptr)) {  //move forward every element after the deleted one 
            lookfor = lookfor->getNext();
            count++;
        }
        if (searchIn(lookfor->getData()) < pos) {
            std::cout<<"outside range"<<" ";  //if we search out of the list , give the error
            return;
        }
        count = 1;
        while (last->getNext() != lookfor) { 
            last = last->getNext();
            count++;
        }
        last->setNext(lookfor->getNext());
    }
}

//implement a function to print the value of the items of the list from head to tail
void LinkedList::printItems() 
{
    Node* print = head;
    if (!head->getData()) {
        return;
    } else if (print->getNext() == nullptr) {
        std::cout<<print->getData()<<" ";
        return;
    } else {
        while (print->getNext() != nullptr) {
            std::cout<<print->getData()<<" ";
            print = print->getNext();
        }
        std::cout<<print->getData()<<" ";
    }
}
//Destructor for LinkedList
LinkedList::~LinkedList() 
{
    delete head;
}