//this function takes two two-dimensional matrices and prints the sum of them

#include <iostream>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){

    //print the sum
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << array1[i][j] + array2[i][j] << " ";
        }
        cout << "\n";
    }

    return;

}