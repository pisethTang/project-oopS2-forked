#include "AirCraft.h"

//constructors
AirCraft::AirCraft(){

}

AirCraft::AirCraft(int w){
    weight = w;
}

int AirCraft::get_weight(){
    return weight;
}
void AirCraft::set_weight(int newWeight){
    weight = newWeight;
    return;
}

float AirCraft::get_fuel(){
    return fuel;
}

void AirCraft::set_fuel(double newFuel){
    fuel = newFuel;
    return;
}

int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}

void AirCraft::set_numberOfFlights(int newNumberOfFlights){
    numberOfFlights = newNumberOfFlights;
}

void AirCraft::refuel(){
    set_fuel(100);
    return;
}

void AirCraft::fly(int headwind, int minutes){
    set_numberOfFlights(get_numberOfFlights() + 1);
    return;
}