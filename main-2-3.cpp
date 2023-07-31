#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {

    //initialise variables
    int number_of_digits;
    int j = 0;
    int sum;

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
    sum = sum_if_palindrome(binary_digits, number_of_digits);

    cout << "The sum is " << sum << "\n";

    return 0;

}