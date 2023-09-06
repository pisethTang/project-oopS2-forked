#include "AirCraft.h"
#include "Helicopter.h"

#include <string>

//constructors
Helicopter::Helicopter(){
    weight = 0;
    fuel = 0;
    numberOfFlights = 0;
    name = "";
}

Helicopter::Helicopter(int w, std::string n){
    weight = w;
    fuel = 100;
    numberOfFlights = 0;
    name = n;
}

//functions
std::string Helicopter::get_name(){
    return name;
}

void Helicopter::set_name(std::string newName){
    name = newName;
    return;
}

void Helicopter::fly(int headwind, int minutes){

    int extraWeight = weight - 5670;
    double fuelCalc = get_fuel();

    //calculating fuelCalc
    if(headwind < 40){
        fuelCalc = fuelCalc - (minutes*0.2);
        if (extraWeight > 0){
            fuelCalc = fuelCalc - (extraWeight*0.01);
        }
    }
    else {
        fuelCalc = fuelCalc - (minutes*0.4);
        if (extraWeight > 0){
            fuelCalc = fuelCalc - (extraWeight*0.01);
        }
    }
    
    //can't fly
    if(fuelCalc < 0.20){
        return;
    }

    //can fly
    else{

        //headwind
        if (headwind < 40){
            set_fuel(get_fuel() - (minutes*0.2));
        }
        else {
            set_fuel(get_fuel() - (minutes*0.4));
        }

        //weight
        if(extraWeight > 0){
            set_fuel(get_fuel() - (extraWeight*0.01));
        }

        set_numberOfFlights(get_numberOfFlights() + 1);

        return;
    }
}