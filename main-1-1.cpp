#include <iostream>
#include <string>

using namespace std;

#include "Cage.h"

int main(){

    //initialise variables
    Cage cage1 = Cage();
    Cage cage2 = Cage("Wallace",18904);

    //print
    cout << "Cage 1: " << cage1.getName() << ": " << cage1.getIDnum() << "\n";
    cout << "Cage 2: " << cage2.getName() << ": " << cage2.getIDnum() << "\n";

    return 0;

}