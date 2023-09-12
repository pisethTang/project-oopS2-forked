#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade{

    private:
    int student_id;
    int course_id;
    std::string assignment;
    int value;

    public:
    //constructors
    Grade(int newStudentID, int newCourseID, std::string newAssignment);
    Grade(); //Doesn't seem to need to exist?

    //functions
    int get_student_ID();
    int get_course_ID();
    std::string get_assignment();
    int get_value();
    void set_value(int newValue);

};

#endif