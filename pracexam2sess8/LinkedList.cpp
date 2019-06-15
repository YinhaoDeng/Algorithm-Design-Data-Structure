#include "LinkedList.h"
#include <iostream>
using namespace std;

//default constructor
LinkedList::LinkedList() {
	head = nullptr;
 }

//the constructor that takes an array of positive size
LinkedList::LinkedList(int* arr, int length) {
    if (length==0)
    {
        head= nullptr;
        return;
    }
    Node * newNode= new Node(arr[0], nullptr);
    head= newNode;
    for(int i=1; i<length; i++)
    {
        Node * nextNewNode= new Node(arr[i], nullptr);
        newNode->next= nextNewNode;
        newNode=nextNewNode;
    }
    return;
}

//the print function
void LinkedList::printItems() {
    if(head != nullptr)
    {
        Node* nextNode = head;
        while (nextNode != nullptr)
        {
            std::cout << nextNode->data << ' ';
            nextNode = nextNode->next;
        }
        std::cout << std::endl;
    }
    return;
}


//To be implemented by you. 
LinkedList LinkedList::filterPositive(){
    if(head != nullptr)
    {   
        Node* nodeB = head;
        Node* nodeA;

        do
        {
            nodeA = nodeB; //start from beggining

            if(nodeB->data > 0)
            {
                nodeA ->next =nodeB ;
                
            }

            nodeB = nodeB->next; //update
        }while(nodeB!=nullptr);

    }
    return head;
}



