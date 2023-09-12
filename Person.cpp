#include "Person.h"

//constructors
Person::Person(){
    name = "";
}

Person::Person(std::string new_name){
    name = new_name;
}

//functions
std::string Person::get_name(){
    return name;
}