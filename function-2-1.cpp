//this function finds and returns the smallest number in a given array

#include <iostream>
using namespace std;

int min_element(int array[], int n){

    //initialising variables
    int min_num;

    //finding min_num
    min_num = array[0];
    for (int i = 1; i < n; i++){
        if (array[i] < min_num){
            min_num = array[i];
        }
    }

    return min_num;

}