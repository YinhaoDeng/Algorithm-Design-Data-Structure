#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int data;
    Node* next;
public:
    Node();
    int getData();
    Node* getNext();
    void setData(int a);
    void setNext(Node* b);
};

#endif