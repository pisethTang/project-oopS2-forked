#include "Grade.h"
//constructors
Grade::Grade(int newStudentID, int newCourseID, std::string newAssignment){
    student_id = newStudentID;
    course_id = newCourseID;
    assignment = newAssignment;
    value = 0;
}

Grade::Grade(){
    student_id = 0;
    course_id = 0;
    assignment = "";
    value = 0;
}

//functions
int Grade::get_student_ID(){
    return student_id;
}

int Grade::get_course_ID(){
    return course_id;
}

std::string Grade::get_assignment(){
    return assignment;
}

int Grade::get_value(){
    return value;
}

void Grade::set_value(int newValue){
    value = newValue;
}