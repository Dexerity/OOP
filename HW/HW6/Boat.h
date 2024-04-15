#pragma once
#include "Vehicle.h"
#include <string>

using namespace std;

class Boat : public Vehicle {
public:
    Boat(int maxSpeed, int weight, string name);
    void move();
private:
    int maxSpeed;
    int weight;
    string name;
};