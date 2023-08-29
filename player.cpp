#include "player.h"
#include "warrior.h"
#include "wizard.h"
#include <iostream>


//constructors
Player::Player(){
    name = "";
    health = 0;
    damage = 0;
}

Player::Player(string newName, int newHealth, int newDamage){
    name = newName;
    health = newHealth;
    damage = newDamage;
}

//functions
void Player::setName(string newName){
    name = newName;
}

string Player::getName(){
    return name;
}

void Player::setHealth(int newHealth){
    health = newHealth;
}

int Player::getHealth(){
    return health;
}

void Player::setDamage(int newDamage){
    damage = newDamage;
}

int Player::getDamage(){
    return damage;
}

void Player::attack(Player* opponent, int newDamage){
    opponent->takeDamage(newDamage);

    cout << opponent->getName() << " takes " << newDamage << " damage. Remaining health: " << opponent->getHealth() << ".\n";

}

void Player::takeDamage(int newDamage){
    this->health-=newDamage;
    
    cout << getName() << " takes " << newDamage << " damage. Remaining health: " << getHealth() << ".\n";
}
