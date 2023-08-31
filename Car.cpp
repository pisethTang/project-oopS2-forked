// #include "Vehicle.h"
#include "Car.h"
#include <iostream>

using namespace std;

//CAR_H
//defining constructors
Car::Car(){
    //define variables
    timeOfEntry = time(NULL);
    ID = 1;
}

Car::Car(int ID_num){
    //define variables
    timeOfEntry = time(NULL);
    ID = ID_num;
}

//functions
int Car::getParkingDuration(){

    //initialise variables
    time_t timeOfDepature;
    int duration;
    double reduced_duration;

    //define variables
    timeOfDepature = time(NULL);
    duration = timeOfDepature - getTimeOfEntry();

    //NOT testing lines
    reduced_duration = 0.9*duration;
    duration = reduced_duration;

    return duration;

}