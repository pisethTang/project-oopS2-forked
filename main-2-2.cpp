#include "AirCraft.h"
#include "Airplane.h"
#include <iostream>

using namespace std;

int main(){
    Airplane a = Airplane(6000, 30);

    cout << "The weight is " << a.get_weight() << " and the fuel level is " << a.get_fuel();
    cout << " and the number of flights is " << a.get_numberOfFlights() << "\n";

    a.fly(20,35);

    cout << "The weight is " << a.get_weight() << " and the fuel level is " << a.get_fuel();
    cout << " and the number of flights is " << a.get_numberOfFlights() << "\n";

    a.set_fuel(80);
    a.fly(45,10);


    return 0;

}