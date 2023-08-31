#include <iostream>

#include "Vehicle.h"
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

//constructors
ParkingLot::ParkingLot(int newMax){
    max = newMax;
    count = 0;
    vehicle = new Vehicle*[max];

    for (int i = 0; i < max; i++){
        vehicle[i] = new Vehicle(0);
    }
};

//functions
int ParkingLot::getCount(){
    return count;
}

void ParkingLot::setCount(int newCount){
    count = count + newCount;
}

int ParkingLot::getMax(){
    return max;
}

Vehicle** ParkingLot::getVehicle(){
    return vehicle;
};

void ParkingLot::setVehicle(Vehicle* b, int c){

    vehicle[c] = b;

    return;
}

void ParkingLot::parkVehicle(Vehicle* k){
    bool full = true;

    for (int i = 0; i < getMax(); i++){

        if (vehicle[i]->getID() == 0 && full == true){

            setVehicle(k,i);

            full = false;

            setCount(1);

        }
    }

    if (full == true){
        cout << "The lot is full\n";
    }

    return;
}

void ParkingLot::unparkVehicle(int ID){
    bool match = false;
    Vehicle c = Vehicle();

    for (int i = 0; i < getMax(); i++){
        if (ID == vehicle[i]->getID() && match == false){
            vehicle[i] = &c;
            match = true;
            setCount(-1);
        }
    }

    if (match == false){
        cout << "Vehicle not in the lot\n";
    }

    return;
}