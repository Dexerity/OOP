#include <iostream>
#include "hero.h"

using namespace std;

int main()
{
    Hero hero1 (5, 100);
    hero1.equipSword(new Sword(5));
    Hero hero2 (12, 200);

    cout << "Heroes alive: " << Hero::heroesAlive << endl;

    while (hero2.isAlive())
    {
        hero1.attack(&hero2);
    }

    cout << "Heroes alive: " << Hero::heroesAlive << endl;

    Hero hero3(10, 100, new Sword(5));

    cout << "Heroes alive: " << Hero::heroesAlive << endl;

    while (hero3.isAlive())
    {
        hero1.attack(&hero3);
    }

    // 
    // Hero* hero3 = Hero::createStarterHero(10, 100);
    cout << "Heroes alive: " << Hero::heroesAlive << endl;
    

    

    return 0;
}