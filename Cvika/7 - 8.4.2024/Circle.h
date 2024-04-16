#include "Shape.h"

class Circle: public Shape
{
private:
    double r;
public:
    Circle(double r);
    double getArea();
    double getCircumference();
    static const double PI;
};

