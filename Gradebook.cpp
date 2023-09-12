#include "Gradebook.h"
#include "Grade.h"

//constructor
Gradebook::Gradebook(){
    numGrades = 0;
}

//functions
int Gradebook::get_num_grades(){
    return numGrades;
}

void Gradebook::set_num_grades(int newNumGrades){
    numGrades = newNumGrades;
}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value){
    list[get_num_grades()] = Grade(stud_id, course_id, assignment);
    list[get_num_grades()].set_value(value);

    set_num_grades(get_num_grades() + 1);
}