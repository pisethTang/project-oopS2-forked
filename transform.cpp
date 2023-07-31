#include <iostream>
using namespace std;

string transform(int n){

    //initialise variables
    string value;
    string binary;
    int remainder = 0;
    int dividing = n;

    //turning it into base 2
    while (dividing > 0){
        if (dividing % 2 != 0) {
            dividing = (dividing - 1) / 2;
            remainder = 1;
        }
        else {
            dividing = dividing / 2;
            remainder = 0;
        }

        binary = binary + to_string(remainder);

    }

    return binary;
}