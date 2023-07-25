//this function finds and returns the largest number in a given array

#include <iostream>
using namespace std;

int max_element(int array[], int n){

    //initialising variables
    int max_num;

    //finding min_num
    max_num = array[0];
    for (int i = 1; i < n; i++){
        if (array[i] > max_num){
            max_num = array[i];
        }
    }

    return max_num;

}