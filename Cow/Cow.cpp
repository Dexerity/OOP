#include "Cow.h"
using namespace std;

Cow::Cow(string name, int age, int speed) : Animal(name, age, speed)
{
    cout << "Cow" << endl;
}

void Cow::makeSound()
{
    cout << "*moo*" << endl;
}