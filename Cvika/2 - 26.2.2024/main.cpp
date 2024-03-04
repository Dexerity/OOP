#include <iostream>
#include "node.h"


int main(){
    
    Node* node2 = new Node(2);
    node2->createNext(4);
    node2->createNext(1);
    node2->createNext(-1);
    node2->createNext(8);

    delete node2;
}