#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl){

    //creating personlist
    PersonList p2;

    //finding length of p1
    p2 = pl;

    //return
    return p2;

}