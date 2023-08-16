#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl){

    //creating personlist
    PersonList p2;

    //finding length of p1
    p2.numPeople = pl.numPeople;
    Person* k = new Person[p2.numPeople];

    for (int i = 0; i < p2.numPeople; i++){
        k[i].name = pl.people[i].name;
        k[i].age = pl.people[i].age;
    }

    p2.people = k;

    //delete[] k;

    //return
    return p2;

}