#pragma once
#include <iostream>
using namespace std;
class Shape
{
    Shape();
    virtual double getArea() = 0;
    virtual double getCircumference() = 0;
};
