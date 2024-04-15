#pragma once
#include "Animal.h"

class Dog : public Animal
{
private:
    string name;
    int age;
    int speed;

public:
    Dog(string name, int age, int speed);
    void makeSound();
    ~Dog();
};
