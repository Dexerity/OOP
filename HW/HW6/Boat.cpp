#include "Boat.h"
#include <iostream>
#include <string>

using namespace std;

Boat::Boat(int maxSpeed, int weight, string name) : Vehicle(maxSpeed, weight, name)
{
    this->maxSpeed = maxSpeed;
    this->weight = weight;
    this->name = name;
}

void Boat::move() 
{
    cout << name << " is sailing on the water." << endl;
}