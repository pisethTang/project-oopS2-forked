#include "Vehicle.h"
#include "Car.h"
#include <iostream>

using namespace std;

//CAR_H
//defining constructors
Car::Car(){
    //initialise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = 0;
}

Car::Car(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = ID;
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

    //testing lines
    cout << "The time of entry is " << getTimeOfEntry() << " and the time of departure is ";
    cout << timeOfDepature << ", so the duration is " << duration;

    //NOT testing lines
    reduced_duration = 0.9*duration;
    duration = reduced_duration;

    //more testing lines
    cout << " but this is a CAR so the reduced duration is " << duration << "\n";

    return duration;

}