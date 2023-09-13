#include "University.h"
#include <string>

using namespace std;

//constructors
University::University(){
    name = "";
    location = "";
    max = 0;
}

University::University(string newName, string newLocation, int newMax){
    name = newName;
    location = newLocation;
    max = newMax;
}

//functions
int University::getMax(){
    return max_num_courses;
}

void University::addCourse(int id, std::string name){
    //initialising variables
    int i = 0;

    //while loop
    while (courses[i].getID() == 0 && i < getMax()){
        i++;
    }

    courses[i] = Course(name, id, 10);
}

int University::getCurrentNum(){
    return current_num_courses;
}

void University::setCurrentNum(int newNum){
    current_num_courses = newNum;
}

// University::~University(){
//     delete[] courses;
// }