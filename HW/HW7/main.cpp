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
    Inventory* inventory = new Inventory(hero);

    inventory->addToInventory(sword1);
    inventory->addToInventory(sword2);
    inventory->addToInventory(armor);

    inventory->printAllItems();

    inventory->useItem(0);
    inventory->useItem(2);
    

    

    






    return 0;
}