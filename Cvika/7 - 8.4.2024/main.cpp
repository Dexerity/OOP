#include <iostream>
#include "Square.h"
#include "Circle.h"

int main(){

    Square *s = new Square(5);
    cout << s->getArea() << endl;
    Circle *c = new Circle(3);

    Shape *ss = new Square(4);
    cout << ss->getArea() << endl;

    Shape* 

    return 0;
}