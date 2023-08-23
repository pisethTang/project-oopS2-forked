#include <iostream>
#include <string>
using namespace std;
#include "Cage.h"
#include "Clinic.h"

//define constructors
Clinic::Clinic(){
    name = "";
    max = 0;
}

Clinic::Clinic(std::string clinic_name, int max_size){
    name = clinic_name;
    max = max_size;

    //array of cages
    Cage* k = new Cage[max_size];
    animals = k;
}

//functions
int Clinic::getMaxSize(){
    return max;
}

int Clinic::getNumber_of_cages(){
    //initialising variables
    int num = 0;

    //finding num
    for (int i = 0; i < getMaxSize(); i++){
        if (animals[i].getName() != ""){
            num++;
        }
    }

    return num;
}

void Cage::setName(string newName){
    name = newName;
}

void Cage::setIDNum(int newID){
    num = newID;
}

string Clinic::getName(){
    return name;
}

Cage* Clinic::getCages(){
    return animals; //weird,,,
}

bool Clinic::addCage(Cage new_cage){
    if (getNumber_of_cages() == getMaxSize()){
        return false;
    }
    else{
        animals[getNumber_of_cages()].setName(new_cage.getName());
        animals[getNumber_of_cages()].setIDNum(new_cage.getIDnum());
        return true;
    }
} 

//destructor
Clinic::~Clinic(){
    delete[] animals;
}