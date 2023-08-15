#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n){

    //creating personlist
    PersonList list;

    //defining array of Persons
    Person* k = new Person[n];
    list.people = k;
    list.numPeople = n;

    for (int i = 0; i < n; i++){
        k[i].name = "Jane Doe";
        k[i].age = 1;
    }

    //returning
    return list;

}