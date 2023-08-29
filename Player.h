#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player{

    protected:
    string name;
    int health;
    int damage;

    public:
    //constructors
    Player();
    Player(string newName, int newHealth, int newDamage);

    //functions
   virtual void attack(Player* opponent, int newDamage);

  virtual  void takeDamage(int newDamage);

    void setName(string newName);

    string getName();

    void setHealth(int newHealth);

    int getHealth();

    void setDamage(int newDamage);

    int getDamage();

};


#endif