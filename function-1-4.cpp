//this function takes a matrix and a number, and prints the scaled version of that matrix by that number

#include <iostream>
using namespace std;

void print_scaled(int array[3][3],int scale){

    //printing array
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << array[i][j] * scale << " ";
        }

        cout << "\n";
    }

    return;

}