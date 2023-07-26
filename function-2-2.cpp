//this function finds and returns the largest number in a given array

#include <iostream>
using namespace std;

int max_element(int array[], int n){

    //initialising variables
    int max_num;

    //checking for n < 1
    if (n < 1) {
        return 0;
    }

    //rest of n's
    else {

        //finding min_num
        max_num = array[0];
        for (int i = 1; i < n; i++){
            if (array[i] > max_num){
                max_num = array[i];
            }
        }

        return max_num;

    }

}