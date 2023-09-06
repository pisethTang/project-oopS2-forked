#include "AirCraft.h"
#include <iostream>

using namespace std;

int main(){
    AirCraft a = AirCraft(10);

    cout << "The weight is " << a.get_weight() << " and the fuel level is " << a.get_fuel();
    cout << " and the number of flights is " << a.get_numberOfFlights() << "\n";

}