//this script calls the count_evens function to count the number of
//even numbers between 1 and an inputted number

#include <iostream>
using namespace std;

extern int count_evens(int number);

int main() {

    //initialise
    int number = 0;
    int count = 0;

    //retrieving number
    cout << "To what number would you like to count? ";
    cin >> number;
    
    //return for if a bad number was entered
    if (number < 1){
        cout << "The count is: 0 \n";
        return 0;
    }

    else {
        count = count_evens(number);

        cout << "The count is: " << count << "\n";

        return count;

    }

}