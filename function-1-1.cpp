#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

//defining function
Person* createPersonArray(int n) {

    //defining array of Persons
    Person* k = new Person[n];

    //returning
    return k;

}

//DON'T FORGET TO DELETE