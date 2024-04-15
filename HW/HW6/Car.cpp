#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(int maxSpeed, int weight, string name) : Vehicle(maxSpeed, weight, name) 
{
    this->maxSpeed = maxSpeed;
    this->weight = weight;
    this->name = name;
}

void Car::move() 
{
    cout << name << " is driving on the road." << endl;
}