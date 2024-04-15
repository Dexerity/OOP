#pragma once
#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    int age;
    int speed;
public:
    Animal();
    Animal(string name, int age, int speed);
    void printInfo();
    string getName();
    int getAge();
    int getSpeed();
    void makeSound();
};
