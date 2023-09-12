#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>
class Instructor : public Person{

    private:

    public:
    //constructors
    Instructor();
    Instructor(std::string newName);

};

#endif