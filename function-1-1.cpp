//this function takes a matrix and returns the sum of its main diagonal

#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]){

    //initialising variables
    int sum = 0;

    //finding diagonal
    for (int i = 0; i < 4; i++){
        sum = sum + array[i][i];
    }

    return sum;

}