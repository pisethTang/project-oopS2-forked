#ifndef COURSE_H
#define COURSE_H

#include "Person.h"
#include <string>

class Course{

    private:
    std::string name;
    int id;
    int size;
    Person** studentList;

    public:
    //constructors
    Course(std::string newName, int newID, int newSize);

    //functions
    std::string getName();
    int getID();
    void addPerson(Person* p);

};

#endif