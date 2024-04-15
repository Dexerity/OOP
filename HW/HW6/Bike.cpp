#include "Bike.h"
#include <iostream>
#include <string>

using namespace std;

Bike::Bike(int maxSpeed, int weight, string name) : Vehicle(maxSpeed, weight, name)
{
    this->maxSpeed = maxSpeed;
    this->weight = weight;
    this->name = name;
}

void Bike::move() 
{
    cout << name << " is riding on the pavement." << endl;
}