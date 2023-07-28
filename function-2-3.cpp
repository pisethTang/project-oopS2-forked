//this function counts the number of 2s, 5s, and 9s in a given array and returns those numbers

#include <iostream>
using namespace std;

void two_five_nine(int array[], int n){

    //initialise variables
    int num_twos = 0;
    int num_fives = 0;
    int num_nines = 0;

    //checking for n < 1
    if (n < 1){
        return;
    }

    else {
        //adding the values of numbers
        for (int i = 0; i < n; i++){
            switch(array[i]) {
                case 2:
                    num_twos = num_twos + 1;
                    break;
                case 5:
                    num_fives = num_fives + 1;
                    break;
                case 9:
                    num_nines = num_nines + 1;
                    break;
            }
        }

        //printing values
        cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";\n";

        return;

    }

}



