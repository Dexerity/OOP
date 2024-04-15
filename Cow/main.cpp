#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

int main(){

    Dog *d = new Dog("pes",12,12);
    d->printInfo();
    d->makeSound();

    Cat *c = new Cat("kocka",1,2);
    c->printInfo();
    c->makeSound();

    Cow *c2 = new Cow("krava",10,1);
    c2->printInfo();
    c2->makeSound();

    return 0;
}