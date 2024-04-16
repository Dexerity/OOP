#include "Circle.h"

const double Circle::PI = 3.14;

Circle::Circle(double r){
    this->r = r;
}

double Circle::getArea(){
    return this->r * this->r * PI;
}

double Circle::getCircumference(){
    return PI * 2 * this->r;
}

