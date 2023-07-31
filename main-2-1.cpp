#include <iostream>
using namespace std;

extern void print_binary_str(string decimal_number);

int main(){

    //initialise variables
    string decimal_number;

    //getting the number
    cout << "What decimal number? ";
    cin >> decimal_number;

    //using the function
    print_binary_str(decimal_number);

    return 0;

}