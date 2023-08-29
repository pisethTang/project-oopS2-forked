#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"
#include <string>
using namespace std;

class Warrior : public Player{

    private:
    string weapon;

    public:
    Warrior(string newName, int newHealth, int newDamage, string newWeapon);
    void swingWeapon(Player* opponent);

};


#endif