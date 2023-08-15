#include <iostream>
using namespace std;

int* readNumbers(){

    //initialise variables
    int* ptr = new int[10];

    //make array
    for (int i = 0; i < 10; i++){
        cout << "What number? ";
        cin >> ptr[i];
    }

    //return pointer
    return ptr;

}

void printNumbers(int* ptr){

    for (int i = 0; i < 10; i++) {
        cout << i << " " << ptr[i] << "\n";
    }

    return;
}