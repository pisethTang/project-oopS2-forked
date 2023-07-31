//this function takes a binary number and returns the decimal value

#include <iostream>
#include <math.h>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits){

    //initialise variables
    int decimal = 0;

    //find decimal
    for (int i = 0; i < number_of_digits; i++){
        decimal = decimal + ( binary_digits[i] * pow(2, (number_of_digits - i - 1)) );
    }

    return decimal;

}