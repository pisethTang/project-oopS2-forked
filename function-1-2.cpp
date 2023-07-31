//this function determines if a 10 by 10 matrix is an identity matrix or not

#include <iostream>
using namespace std;

int is_identity(int array[10][10]){

    //initialise variables
    int yes_or_no = 0;
    int adding = 0;

    //determining if identity matrix
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            //the event that it's a diagonal and it's 1
            if (i == j && array[i][j] == 1){
                
            }
            //the event that it's a diagonal and not equal to 1
            else if (i == j && array[i][j] != 1){
                adding++;
            }
            //the event that it's not a diagonal and it's equal to 0
            else if (i != j && array[i][j] == 0){

            }
            //the event that it's not a diagonal and it's not equal to 0
            else {
                adding++;
            }
        }
    }

    //determining yes_or_no
    if (adding == 0) {
        yes_or_no = 1;
    }

    return yes_or_no;

}