#include "Student.h"

//constructors
Student::Student(){
    name = "";
    id = 0;
}

Student::Student(std::string newName, int newid){
    name = newName;
    id = newid;
}

//functions
int Student::get_id(){
    return id;
}