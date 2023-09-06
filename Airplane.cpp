#include "AirCraft.h"
#include "Airplane.h"

//constructors
Airplane::Airplane(){
    weight = 0;
    fuel = 0;
    numberOfFlights = 0;
    numPassengers = 0;
}

Airplane::Airplane(int w, int p){
    weight = w;
    numPassengers = p;
    fuel = 100;
    numberOfFlights = 0;
}

//functions
int Airplane::getNumPassengers(){
    return numPassengers;
}

void Airplane::reducePassengers(int x){
    numPassengers = numPassengers - x;
    if (numPassengers < 0){
        numPassengers = 0;
    }

    return;
}

int Airplane::get_numPassengers(){
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes){

    double fuelCalc = get_fuel();

    //calculating fuelCalc
    if(headwind < 60){
        fuelCalc = fuelCalc - (minutes*0.3);

        //accounting for passengers
        fuelCalc = fuelCalc - (getNumPassengers()*0.001);
    }
    else {
        fuelCalc = fuelCalc - (minutes*0.5);

        //accounting for passengers
        fuelCalc = fuelCalc - (getNumPassengers()*0.001);
    }
    
    //can't fly
    if(fuelCalc < 0.20){
        return;
    }

    //can fly
    else{

        //headwind
        if (headwind < 60){
            set_fuel(get_fuel() - (minutes*0.3));

            //passengers
            set_fuel(get_fuel() - (getNumPassengers()*0.001));
        }
        else {
            set_fuel(get_fuel() - (minutes*0.5));

            //passengers
            set_fuel(get_fuel() - (getNumPassengers()*0.001));
        }

        set_numberOfFlights(get_numberOfFlights() + 1);

        return;
    }
}