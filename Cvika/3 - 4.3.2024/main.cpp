#include <iostream>
#include "hero.h"

int main()
{
    Hero hero1 (5, 100);
    hero1.equipSword(new Sword(5));
    Hero hero2 (12, 200);

    while (hero2.isAlive())
    {
        hero1.attack(&hero2);
    }
    

    

    return 0;
}