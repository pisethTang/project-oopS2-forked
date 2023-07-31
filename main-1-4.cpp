#include <iostream>
using namespace std;

extern void print_scaled(int array[3][3],int scale);

int main(){

    //make scale
    int scale;
    cout << "What scale? ";
    cin >> scale;

    //build array
    int array[3][3];

    cout << "Please input the numbers in the array, from top left to bottom right: ";
    for (int i = 0; i < 3 ; i++){
        
        for (int j = 0; j < 3; j++){
            cin >> array[i][j];
        }

    }

    //using function
    print_scaled(array,scale);

    return 0;

}