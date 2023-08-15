#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main() {

    //initialise variables
    int n;
    Person* k;

    //finding n
    cout << "How many people? ";
    cin >> n;

    //using function
    k = createPersonArray(n);

    //printing
    for (int i = 0; i < n; i++){
        cout << "Person " << i + 1 << ": " << k[i].name << " " << k[i].age << "\n";
    }

    //DELETE
    delete[] k;

    return 0;

}