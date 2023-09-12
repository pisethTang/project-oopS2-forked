#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"
#include <string>

class Gradebook{

    private:
    Grade* list;
    int numGrades;

    public:
    //constructors
    Gradebook(); //This doesn't seem to need to exist?

    //functions
    int get_num_grades();
    void set_num_grades(int newNumGrades);
    void addGrade(int stud_id, int course_id, std::string assignment, int value);

};

#endif