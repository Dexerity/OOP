#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

Vehicle::Vehicle(int maxSpeed, int weight, string name) 
{
    this->maxSpeed = maxSpeed;
    this->weight = weight;
    this->name = name;
}

Vehicle::Vehicle() 
{
    this->maxSpeed = 0;
    this->weight = 0;
    this->name = "";
}

void Vehicle::info() 
{
    cout << name << " has a max speed of " << maxSpeed << " km/h and weighs " << weight << " kgs." << endl;
}

int Vehicle::getMaxSpeed() 
{
    return maxSpeed;
}

int Vehicle::getWeight() 
{
    return weight;
}

string Vehicle::getName() 
{
    return name;
}

void Vehicle::move() 
{
    cout << name << " is moving." << endl;
}