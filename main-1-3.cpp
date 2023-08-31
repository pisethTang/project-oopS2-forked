#include <iostream>

#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main(){

    //initialising variables
    ParkingLot a = ParkingLot(10);
    int response;

    //finding the ten vehicles
    for (int i = 0; i < 10; i++){
        cout << "What vehicle type? 1 for car, 2 for bus, 3 for motorbike. ";
        std::cin >> response;

        switch(response){
            case 1:
                cout << "Case 1: \n";

                {
                Car b = Car(i);
                Car* ptr1 = &b;

                a.parkVehicle(ptr1);
                cout << "parkVehicle \n";
                }
            break;
            case 2:
                cout << "Case 2: \n";

                {
                Bus b = Bus(i);
                Bus* ptr1 = &b;

                a.parkVehicle(ptr1);
                cout << "parkVehicle \n";
                }
            break;
            case 3:
                cout << "Case 3: \n";

                {
                Motorbike b = Motorbike(i);
                Motorbike* ptr1 = &b;

                a.parkVehicle(ptr1);
                cout << "parkVehicle \n";
                }
            break;
            default:
                i = i - 1;
        }
    }

    cout << a.countOverstayingVehicles(15) << "\n";

    delete[] a.getVehicle();

    return 0;

}