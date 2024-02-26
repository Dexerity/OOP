#pragma once

class Node {
public: 
    Node(int value);
    ~Node();
    int getValue();
    Node* getNextL();
    Node* getNextR();
    Node* createNext(int value);
private:
    int value;
    Node* nextR;
    Node* nextL;
};