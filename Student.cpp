#include "Student.h"

Student::Student()
{
	name = "yuval";
	id = 22222222;
	age = 22;
	average = 95;
	institute = "SCE";

}

Student::Student(string name, long id, int age, int average, string institute) :Person(name, id, age)
{
	this->average = average;
	this->institute = institute;
}
