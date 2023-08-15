#ifndef PERSON_H
#define PERSON_H

//defining structure
struct Person {
    string name;
    int age;
    
    //constructor
    Person(string a, int b){
        name = a;
        age = b;
    }

    //standard constructor
    Person(){
        name = "John Doe";
        age = 0;
    }
};

#endif