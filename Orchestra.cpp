#include <iostream>
using namespace std;

#include "Musician.h"
#include "Orchestra.h"

//default constructor
Orchestra::Orchestra(){
    o_size = 0;
}

//other constructor
Orchestra::Orchestra(int size){
    o_size = size;

    //create array of musicians
    Musician* k = new Musician[size];
    players = k;
}

//functions
int Orchestra::get_size(){
    return o_size;
}

void Musician::set_musician(Musician new_musician, Musician old_musician){
    old_musician.m_instrument = new_musician.m_instrument;
    old_musician.m_experience = new_musician.m_experience;
}

int Orchestra::get_current_number_of_members(){
    //initialise variables
    int num = 0;

    for (int i = 0; i < get_size(); i++){
        if (players[i].get_instrument() != "null"){
            num++;
        }
    }

    return num;
}

bool Orchestra::has_instrument(std::string instrument){
    bool a;
    
    for (int i = 0; i < get_size(); i++){
        if(players[i].get_instrument() == instrument){
            a = true;
        }
        else {
            a = false;
        }
    }

    return a;
}

Musician* Orchestra::get_members(){
    return players;
}

bool Orchestra::add_musician(Musician new_musician){
    if (get_current_number_of_members() != get_size()) {
        set_musician(new_musician, players[get_current_number_of_members()]);

        return 1;
    }
    else {
        return 0;
    }
}


//destructor
Orchestra::~Orchestra(){
    delete[] players;
}