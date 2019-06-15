#include "Node.h"
#include <cstddef>

Node::Node() {
    data = 0;
    next = nullptr;
}
//getters and setters
int Node::getData() {
    return data;
}

Node* Node::getNext() {
    return next;
}

void Node::setData(int a) {
    data = a;
}

void Node::setNext(Node* b) {
    next = b;
}