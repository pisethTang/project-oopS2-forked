#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
class Student : public Person{

    private:
    int id;

    public:
    //constructors
    Student();
    Student(std::string newName, int newid);

    //functions
    int get_id();

};

#endif