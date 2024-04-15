#pragma once
#include "Vehicle.h"
#include <string>

using namespace std;

class Bike : public Vehicle {
public:
    Bike(int maxSpeed, int weight, string name);
    void move();
private:
    int maxSpeed;
    int weight;
    string name;
};