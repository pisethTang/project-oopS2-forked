#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person{
    protected:
    std::string name;

    public:
    //constructors
    Person();
    Person(std::string new_name);

    //functions
    std::string get_name();
};

#endif