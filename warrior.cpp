
#include "warrior.h"
#include "wizard.h"
#include <iostream>

Warrior::Warrior(string newName, int newHealth, int newDamage, string newWeapon):Player(newName,newHealth,newDamage){
    setName(newName);
    setHealth(newHealth);
    setDamage(newDamage);
    weapon = newWeapon;
}

//Warrior class
void Warrior::swingWeapon(Player* opponent){
  //  int num = rand() % 9 + 1;

    cout << name << " swings their " << weapon << " at " << opponent->getName() << " for " << damage << " damage!\n";
    
    opponent->takeDamage(damage);
}