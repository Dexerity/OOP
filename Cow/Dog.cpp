#include "Dog.h"
using namespace std;

Dog::Dog(string name, int age, int speed) : Animal(name, age, speed)
{
    cout << "Dog" << endl;
}

void Dog::makeSound()
{
    cout << "*woof*" << endl;
}