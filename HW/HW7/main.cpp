#include "Sprite.h"
#include "Inventory.h"
#include "Hero.h"
#include "Sword.h"
#include "Armor.h"

int main(){
    Hero* hero = new Hero(100, 10);
    Sword* sword1 = new Sword(10, "Excalibur");
    Sword* sword2 = new Sword(20, "Doombringer");
    Armor* armor = new Armor(10, "Steel Armor");

    hero->equipSword(sword1);
    hero->equipArmor(armor);
    hero->addToInventory(sword2);

    hero->printAllItems();

    






    return 0;
}