#include "Aircraft.h"

//constructors
Aircraft AirCraft(){

}

Aircraft AirCraft(int w){
    weight = w;
}

int Aircraft::get_weight(){
    return weight;
}
void Aircraft::set_weight(int newWeight){
    weight = newWeight;
    return;
}

float Aircraft::get_fuel(){
    return fuel;
}

void Aircraft::set_fuel(double newFuel){
    fuel = newFuel;
    return;
}

int Aircraft::get_numberOfFlights(){
    return numberOfFlights;
}

void Aircraft::set_numberOfFlights(int newNumberOfFlights){
    numberOfFlights = newNumberOfFlights;
}

void Aircraft::refuel(){
    set_fuel(100);
    return;
}

void Aircraft::fly(int headwind, int minutes){
    set_numberOfFlights(get_numberOfFlights() + 1);
    return;
}