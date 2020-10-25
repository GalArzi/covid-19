#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    int average;
    string institute;
public:
    Student();
    Student(string, long, int, int, string);
    ~Student() {}
};

