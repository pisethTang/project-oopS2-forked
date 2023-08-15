#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main() {

    //initialise variables
    int n;

    //finding n
    cout << "How many people? ";
    cin >> n;

    //using function
    PersonList list = createPersonList(n);

    //printing
    for (int i = 0; i < n; i++){
        cout << "Person " << i + 1 << ": " << list.people[i].name << " " << list.people[i].age << "\n";
    }

    //deallocate memory
    delete[] list.people;

    return 0;

}