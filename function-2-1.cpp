//this function prints a binary number from a given positive integer

#include <iostream>
using namespace std;

void print_binary_str(string decimal_number){

    //initialise variables
    int divisor = stoi(decimal_number);
    string binary;

    //turning it into binary
    while (divisor > 0) {

        //odd numbers
        if (divisor % 2 != 0){
            binary = "1" + binary;
            divisor = (divisor - 1) / 2;
        }

        //even numbers
        else {
            binary = "0" + binary;
            divisor = divisor / 2;
        }

    }

    //printing the binary
    cout << "Your binary is " << binary << "\n";

    return;

}