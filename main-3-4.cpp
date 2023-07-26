#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main() {

    //initialise variables
    char grade;

    //getting character input
    cout << "What grade? ";
    cin >> grade;

    //using function
    print_pass_fail(grade);

    return 0;

}