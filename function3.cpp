#include <iostream>
using namespace std;

void printArray(double* ptr, int n){

    for (int i = 0; i < n; i++){
        cout << ptr[i] << " ";
    }

    return;
}

int main() {

    //initialise variables
    int n = 0;
    int j = 0;

    //digits
    cout << "How many digits? ";
    cin >> n;

    //make dynamic array
    double *array = new double[n];

    cout << "Enter the digits: ";
    for (int i = 0; i < n; i++){
        cin >> array[i];
        j++;
    }

    //creating a non-dynamic array
    int binary_digits[j];
    for (int i = 0; i < n; i++){
        binary_digits[i] = array[i];
    }

    printArray(array,n);

    delete [] array;

}