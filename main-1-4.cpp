#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);

int main() {

    //initialise variables
    int n;
    PersonList p2;

    //finding n
    cout << "How many people? ";
    cin >> n;

    //creating pl
    PersonList pl;

    //defining array of Persons
    Person* k = new Person[n];
    pl.people = k;
    pl.numPeople = n;

    for (int i = 0; i < n; i++){
        k[i].name = "Jane Doe";
        k[i].age = 1;
    }

    //printing
    cout << "The first construct: \n";
    for (int i = 0; i < n; i++){
        cout << "Person " << i + 1 << ": " << pl.people[i].name << " " << pl.people[i].age << "\n";
    }

    //using function
    p2 = deepCopyPersonList(pl);

    //printing
    cout << "The second construct: \n";
    for (int i = 0; i < n; i++){
        cout << "Person " << i + 1 << ": " << p2.people[i].name << " " << p2.people[i].age << "\n";
    }

    delete[] k;

    return 0;
}