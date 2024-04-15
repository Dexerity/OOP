#pragma once
#include "Animal.h"

class Cat : public Animal
{
private:
    string name;
    int age;
    int speed;

public:
    Cat(string name, int age, int speed);
    void makeSound();
    ~Cat();
};
