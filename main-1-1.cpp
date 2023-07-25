#include <iostream>
using namespace std;

extern int array_sum(int[],int);

int main() {

    //initialising
    int n = 0;

    //finding n
    cout << "Please input the number of elements in the array: ";
    cin >> n;

    //if n < 1
    if (n < 1) {

        cout << "The sum of all elements is: 0 \n";

        return 0;
    }
    else { //sum otherwise

        //initialising array
        int* array;
        array = new int[n];

        for (int i = 0; i < n; i = i + 1){
            cout << "Please input an integer for the array: ";
            cin >> array[i];
        }

        cout << "The sum of all elements is: " << array_sum(array,n) << "\n";

        //initialise
        int sum = array_sum(array,n);

        delete [] array;

        return sum;

    }

}