#pragma once
#include "Person.h"

class Employee :    public Person
{
protected:
    float salary;
public:
        Employee();
        Employee(string, long, int, float);
        ~Employee();
};

