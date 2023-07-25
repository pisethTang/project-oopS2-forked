//this script uses the max_element function to find the largest element in a given array

#include <iostream>
using namespace std;

extern int max_element(int array[], int n);

int main() {

    //initialising variables
    int n = 0;
    int max_num = 0;

    //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "The maximum number is: 0 \n";
        return 0;
    }

    //case of n >= 1
    else {

        //building array
        int* array;
        array = new int[n];

        for (int i = 0; i < n; i = i + 1){
            cout << "Please input an integer for the array: ";
            cin >> array[i];
        }

        //using function
        max_num = max_element(array,n);

        //printing
        cout << "The maximum element in this array is: " << max_num << "\n";

        //cleaning up
        delete array;
        return max_num;

    }

}