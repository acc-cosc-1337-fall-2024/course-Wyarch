//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string letterGrade;

    if(grade >= 90 && grade <= 100)
    {
        letterGrade = "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        letterGrade = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        letterGrade = "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        letterGrade = "D";
    }
    else if(grade >= 0 && grade <= 59)
    {
        letterGrade = "F";
    }

    return letterGrade;
}

string get_letter_grade_using_switch(int grade)
{
    string letterGrade;

    switch(grade)
    {
        case 1 ... 59:
            letterGrade = "F";
            break;
        case 60 ... 69:
            letterGrade = "D";
            break;
        case 70 ... 79:
            letterGrade = "C";
            break;
        case 80 ... 89:
            letterGrade = "B";
            break;
        case 90 ... 100:
            letterGrade = "A";
            break;
    }

    return letterGrade;
}