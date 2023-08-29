#include "Vehicle.h"
#include <iostream>
using namespace std;

//VEHICLE_H
//defining constructors
Vehicle::Vehicle(){
    //initialise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = 0;
}

Vehicle::Vehicle(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = ID;
}

//functions
int Vehicle::getID(){
    return ID;
}

time_t Vehicle::getTimeOfEntry(){
    return timeOfEntry;
}

//virtual function
int Vehicle::getParkingDuration(){ //is this function necessary?? I never call it?? how does virtual work
    //initialise variables
    time_t timeOfDepature;
    int duration;
    double reduced_duration;

    //define variables
    timeOfDepature = time(NULL);
    duration = timeOfDepature - getTimeOfEntry();

    reduced_duration = 0.75*duration;
    duration = reduced_duration;

    //test line
    cout << "Vehicle\n";

    return duration;
}

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

//BUS_H
//defining constructors
Bus::Bus(){
    //initialise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = 0;
}

Bus::Bus(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = ID;
}

//functions
int Bus::getParkingDuration(){

    //initialise variables
    time_t timeOfDepature;
    int duration;
    double reduced_duration;

    //define variables
    timeOfDepature = time(NULL);
    duration = timeOfDepature - getTimeOfEntry();

    reduced_duration = 0.75*duration;
    duration = reduced_duration;

    //test line
    cout << "Bus\n";

    return duration;

}

//MOTORBIKE_H
//defining constructors
Motorbike::Motorbike(){
    //initialise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = 0;
}

Motorbike::Motorbike(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = ID;
}

//defining functions
int Motorbike::getParkingDuration(){

    //initialise variables
    time_t timeOfDepature;
    int duration;
    double reduced_duration;

    //define variables
    timeOfDepature = time(NULL);
    duration = timeOfDepature - getTimeOfEntry();

    reduced_duration = 0.85*duration;
    duration = reduced_duration;

    //test line
    cout << "Motorbike\n";

    return duration;

}