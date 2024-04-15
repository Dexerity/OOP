#include "Cat.h"
using namespace std;

Cat::Cat(string name, int age, int speed) : Animal(name, age, speed)
{
    cout << "Cat" << endl;
}

void Cat::makeSound()
{
    cout << "*meow*" << endl;
}