#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main() {

    //initialise variables
    int yes_or_no;

    //build array
    int array[10][10];

    cout << "Please input the numbers in the array, from top left to bottom right: ";
    for (int i = 0; i < 10 ; i++){
        
        for (int j = 0; j < 10; j++){
            cin >> array[i][j];
        }

    }

    //using the function
    yes_or_no = is_identity(array);
    cout << "The function is ";

    if (yes_or_no == 1) {
        cout << "an identity matrix. \n";
    }
    else {
        cout << "not an identity matrix. \n";
    }

    return 0;

}