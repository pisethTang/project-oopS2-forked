#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(){

    //initialise variables
    int sum;

    //build array
    int array[4][4];

    cout << "Please input the numbers in the array, from top left to bottom right: ";
    for (int i = 0; i < 4 ; i++){
        
        for (int j = 0; j < 4; j++){
            cin >> array[i][j];
        }

    }

    //using function
    cout << "The sum of the main diagonal is ";
    sum = sum_diagonal(array);
    cout << sum << ".\n";

}