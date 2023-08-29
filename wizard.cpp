
#include "Warrior.h"
#include "Wizard.h"
#include <iostream>

Wizard::Wizard(string newName, int newHealth, int newDamage, int newMana):Player(newName,newHealth,newDamage){
    setName(newName);
    setHealth(newHealth);
    setDamage(newDamage);
    mana = newMana;
}

//Wizard class
void Wizard::castSpell(Player* opponent){
    //int num = rand() % 9 + 1;

    cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
    
    opponent->takeDamage(mana);
}