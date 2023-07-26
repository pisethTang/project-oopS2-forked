//this function determines whether an array is a in a "fan" shape
//and returns the relevant bool value

#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n){

    //initialise variables
    int i = 0;
    int current_num = array[0];
    bool true_or_false;

    //the case for even length
    if (n % 2 == 0){

        //determining that it ascends to the halfway point
        while (i < n / 2){
            if (array[i] >= current_num) {
                current_num = array[i];
                cout << "Even: Ascending! at i = " << i << "\n"; //delete this later
                true_or_false = true;
            }
            else {
                i = n;
                true_or_false = false;
                cout << "Even: No longer ascending at i = " << i << "\n"; //delete this later
            }
            i++;
        }

        //determining that the array mirrors, if it passed the ascending test
        if (true_or_false == true) {
            i = 0;
            while (i < n / 2) {
                if (array[i] == array[n - i - 1]){
                    i++;
                    true_or_false = true;
                    cout << "Even: Mirroring at i = " << i << "\n"; //delete this later
                }
                else {
                    i = n;
                    true_or_false = false;
                    cout << "Even: No longer mirroring at i = " << i << "\n";
                }
            }
        }
    }

    //the case for odd length
    else {
        //variables
        i = 0;
        current_num = array[0];

        //determining if it ascends to the center value
        while (i < (n - 1) / 2){
            if (array[i] >= current_num){
                current_num = array[i];
                i++;
                true_or_false = true;
            }
            else {
                i = n;
                true_or_false = false;
            }
        }

        //final ascention for the centre point
        if (true_or_false == true){
            if (array[(n - 1) / 2] >= array[((n - 1) / 2) - 1]) {
                true_or_false = true;
            }
            else {
                true_or_false = false;
            }
        }

        //determining if the values on either side of the center value are equal
        if (true_or_false == true){
           
            i = 0;

            while (i < (n - 1) / 2){
                if (array[i] == array[n - i - 1]){
                    i++;
                    true_or_false = true;
                }
                else{
                    i = n;
                    true_or_false = false;
                }
            }
        }
    }

    return true_or_false;

}