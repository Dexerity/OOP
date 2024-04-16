#include "Rectangle.h"

Shape::Shape()
{
    cout << "Shape" << endl;
}

Rectangle::Rectangle(double a, double b){
    this->a = a;
    this->b = b;
}

double Rectangle::getArea(){
    return this->a * this->b;
}

double Rectangle::getCircumference(){
    return 2*(this->a + this->b);
}