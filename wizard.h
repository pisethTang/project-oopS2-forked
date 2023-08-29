#ifndef WIZARD_H
#define WIZARD_H

#include "Player.h"
#include <string>
using namespace std;

class Wizard : public Player{

    private:
    int mana;

    public:
    Wizard(string newName, int newHealth, int newDamage, int newMana);
    void castSpell(Player* opponent);

};

#endif