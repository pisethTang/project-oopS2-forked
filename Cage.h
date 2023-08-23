#ifndef CAGE_H
#define CAGE_H

#include <string>

class Cage{
    private:
    std::string name;
    int num;

    public:
    Cage();                                    // a default constructor ID number is zero and occupant name is an empty string ""
    Cage(std::string newName, int newNumber);  // a constructor that takes the ID number and occupant name

    std::string getName();                    // returns the name of the cage occupant
    int getIDnum();                           // returns the cage's ID number

    void setName(std::string newName);
    void setIDNum(int newID);

    ~Cage();                                   // destructor 
};

#endif