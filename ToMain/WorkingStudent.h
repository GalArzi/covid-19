#pragma once
#include "Person.h"
#include "Student.h"
#include "Employee.h"
class WorkingStudent :
    public Person, public Student, public Employee
{
protected:
    bool same_institute;
public:
    WorkingStudent();
    WorkingStudent(string, long, int, float, string, float, bool);
    ~WorkingStudent();
};

