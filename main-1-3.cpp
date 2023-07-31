#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main(){

    //build array
    int array[4][4];

    cout << "Please input the numbers in the array, from top left to bottom right: ";
    for (int i = 0; i < 4 ; i++){
        
        for (int j = 0; j < 4; j++){
            cin >> array[i][j];
        }

    }

    //using function
    count_digits(array);

    return 0;

}