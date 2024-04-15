#pragma once
#include "Vehicle.h"
#include <string>

using namespace std;

class Car : public Vehicle {
public:
    Car(int maxSpeed, int weight, string name);
    void move();
private:
    int maxSpeed;
    int weight;
    string name;
};