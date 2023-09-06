#include "AirCraft.h"
#include "Helicopter.h"
#include <iostream>

using namespace std;

int main(){
    Helicopter a = Helicopter(10,"Sally");

    cout << "The weight is " << a.get_weight() << " and the fuel level is " << a.get_fuel();
    cout << " and the number of flights is " << a.get_numberOfFlights() << "\n";

    a.fly(20,35);

    cout << "The weight is " << a.get_weight() << " and the fuel level is " << a.get_fuel();
    cout << " and the number of flights is " << a.get_numberOfFlights() << "\n";

    return 0;

}