#include <iostream>
using namespace std;

extern void print_summed(int array1[3][3],int array2[3][3]);

int main(){

    //build array
    int array1[3][3];

    cout << "Please input the numbers in the first array, from top left to bottom right: ";
    for (int i = 0; i < 3 ; i++){
        
        for (int j = 0; j < 3; j++){
            cin >> array1[i][j];
        }

    }

    int array2[3][3];
    cout << "Please input the numbers in the second array, from top left to bottom right: ";
    for (int i = 0; i < 3 ; i++){
        
        for (int j = 0; j < 3; j++){
            cin >> array2[i][j];
        }

    }

    //using function
    print_summed(array1,array2);

    return 0;

}