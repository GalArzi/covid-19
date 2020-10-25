#pragma once
#include "Person.h"
class Student:
    public Person
{
protected:
    float average;
    string institute;
public:
    Student();
    Student(string, long, int, float, string);
    ~Student() {}
};

