#include "node.h"

Node::Node(int value) {
    this->value = value;
    this->nextL = nullptr;
    this->nextR = nullptr;
}

int Node::getValue() {
    return this->value;
}

Node* Node::getNextR() {
    return this->nextR;
}

Node* Node::getNextL() {
    return this->nextL;
}

Node* Node::createNext(int value) {
    if(value > this->value)
    {
        if (this->nextR == nullptr)
        {
            this->nextR = new Node(value);
            return this->nextR;    
        }
        return this->nextR->createNext(value);
    }
    else
    {
        if (this->nextL == nullptr)
        {
            this->nextL = new Node(value);
            return this->nextL;    
        }
        return this->nextL->createNext(value);
    }
}

Node::~Node() {
    if(this->nextL != nullptr)
    delete this->nextL;
    if(this->nextR != nullptr)
    delete this->nextR;
    this->nextR = nullptr;
    this->nextL = nullptr;
}

