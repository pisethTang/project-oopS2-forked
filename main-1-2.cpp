#include "Clinic.h"
#include "Cage.h"

#include <iostream>
#include <string>
using namespace std;

int main(){

    //test clinic 1
    Clinic clinic1;
    clinic1 = Clinic();

    cout << "Clinic 1: " << clinic1.getName() << ": " << clinic1.getMaxSize() << "\n";
    cout << "Clinic 1:  : 0\n";

    //test clinic 2
    Clinic clinic2;
    clinic2 = Clinic("Adelaide Vet", 3);

    cout << "Clinic 1: " << clinic2.getName() << ": " << clinic2.getMaxSize() << "\n";
    cout << "Clinic 1: Adelaide Vet: 3\n"; //test line

    int a;
    a = getNumber_of_cages();
    cout << a << "\n";

    Cage cage1("Wallace", 11);
    Cage cage2("Nugget", 12);
    Cage cage3("Toby", 13);
    Cage cage4("Noodle", 14);

    bool b;
    b = addCage(cage1);
    cout << b << "\n";
    cout << "True\n";

    //get cages
    Cage* cages = getCages();
    for (int i = 0; i < getNumber_of_cages(); i++){
        cout << cages[i].getName() << ": " << cages[i].getIDnum() << "\n";
    }

    b = addCage(cage2);
    cout << b << "\n";
    cout << "True\n";

    //get cages
    for (int i = 0; i < getNumber_of_cages(); i++){
        cout << cages[i].getName() << ": " << cages[i].getIDnum() << "\n";
    }

    b = addCage(cage3);
    cout << b << "\n";
    cout << "True\n";

    //get cages
    for (int i = 0; i < getNumber_of_cages(); i++){
        cout << cages[i].getName() << ": " << cages[i].getIDnum() << "\n";
    }

    b = addCage(cage4);
    cout << b << "\n";
    cout << "False\n";

    //get cages
    for (int i = 0; i < getNumber_of_cages(); i++){
        cout << cages[i].getName() << ": " << cages[i].getIDnum() << "\n";
    }

    return 0;
}