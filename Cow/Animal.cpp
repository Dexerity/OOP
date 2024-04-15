#include "Animal.h"

using namespace std;

Animal::Animal(string name, int age, int speed)
{
    this->name = name;
    this->age = age;
    this->speed = speed;
    cout << "Animal: ";
}
Animal::Animal()
{
    this->age = 0;
    this->speed = 0;
    cout << "Animal" << endl;
}

void Animal::printInfo(){
    cout << "Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Speed: " << getSpeed() << endl;
}

void Animal::makeSound()
{
    cout << "*...*" << endl;
}

string Animal::getName()
{
    return this->name;
}
int Animal::getAge()
{
    return this->age;
}
int Animal::getSpeed()
{
    return this->speed;
}