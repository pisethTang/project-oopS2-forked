#include <iostream>
#include <string>

using namespace std;

#include "Cage.h"

    //defining constructors
    Cage::Cage(){
        name = "";
        num = 0;
    }

    Cage::Cage(string newName, int newNumber){
        name = newName;
        num = newNumber;
    }

    //functions
    string Cage::getName(){
        return name;
    }

    int Cage::getIDnum(){
        return num;
    }

    //defining destructor
    Cage::~Cage(){
        //why is this here??
    }