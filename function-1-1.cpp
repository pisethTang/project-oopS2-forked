#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

//defining function
Person* createPersonArray(int n) {

    //defining array of Persons
    Person* k = new Person[n];

    for (int i = 0; i < n; i++){
        k[i].name = "John Doe";
        k[i].age = 0;
    }

    //returning
    return k;

}