#pragma once
#include <string>

using namespace std;

class Vehicle {
public:
    Vehicle(int maxSpeed, int weight, string name);
    Vehicle();
    void info();
    int getMaxSpeed();
    int getWeight();
    string getName();
    void move();
private:
    int maxSpeed;
    int weight;
    string name;
};