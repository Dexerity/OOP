#pragma once
#include "Animal.h"

class Cow : public Animal
{
private:
    string name;
    int age;
    int speed;

public:
    Cow(string name, int age, int speed);
    void makeSound();
    ~Cow();
};
