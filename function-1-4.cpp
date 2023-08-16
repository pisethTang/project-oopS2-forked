#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl){

    //creating personlist
    PersonList p2;

    //copying pl
    p2.numPeople = pl.numPeople;
    p2.people = pl.people;

    //return
    return p2;

}