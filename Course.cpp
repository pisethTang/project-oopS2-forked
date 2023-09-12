#include "Course.h"
#include "Person.h"

using namespace std;

//constructors
Course::Course(std::string newName, int newID, int newSize){
    name = newName;
    id = newID;
    size = newSize;

    studentList = new Person*[newSize];
}

//functions
std::string Course::getName(){
    return name;
}

int Course::getID(){
    return id;
}

void Course::addPerson(Person* p){
    //initialise variables
    int i = 0;

    //while loop
    while (studentList[i]->get_name() == ""){
        i++;
    }

    studentList[i] = p;

}