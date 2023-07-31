#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {

    //initialise variables
    int length;
    int j = 0;
    int sum;

    //find number of digits
    cout << "How many digits? ";
    cin >> length;
    
    //make dynamic array
    int *array = new int[length];

    cout << "Enter the digits: ";
    for (int i = 0; i < length; i++){
        cin >> array[i];
        j++;
    }

    //creating a non-dynamic array
    int integers[j];
    for (int i = 0; i < length; i++){
        integers[i] = array[i];
    }

    delete [] array;

    //using function
    sum = sum_min_max(integers, length);

    cout << "The sum is " << sum << "\n";

    return 0;

}