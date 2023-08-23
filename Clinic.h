#ifndef CLINIC_H
#define CLINIC_H

#include <string>
#include "Cage.h"
using namespace std;

class Clinic{

    private:
    string name;
    int max;
    

    public:
    Clinic();                                // default constructor
    Clinic(std::string name, int max_size);  // constructor with given Clinic size and 
                                             // Clinic name

    int getNumber_of_cages();               // returns the number of cages currently in the the clinic
    std::string getName();                  // returns the clinics's name
    Cage * getCages();                      // returns the array of cages currently in the clinic

    bool addCage(Cage new_cage);            // tries to add a cage to clinic. If there is enough space, return true
                                             // and adds cage to the clinic. Otherwise, do not save cage, and return false. 

    ~Clinic();                               // destructor


};

#endif