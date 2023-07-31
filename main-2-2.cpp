#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {

    //initialise variables
    int number_of_digits;
    int j = 0;
    int decimal;

    //find number of digits
    cout << "How many digits? ";
    cin >> number_of_digits;
    
    //make dynamic array
    int *array = new int[number_of_digits];

    cout << "Enter the digits: ";
    for (int i = 0; i < number_of_digits; i++){
        cin >> array[i];
        j++;
    }

    //creating a non-dynamic array
    int binary_digits[j];
    for (int i = 0; i < number_of_digits; i++){
        binary_digits[i] = array[i];
    }

    delete [] array;

    //using function
    decimal = binary_to_int(binary_digits, number_of_digits);

    cout << "The decimal is " << decimal << "\n";

    return 0;

}