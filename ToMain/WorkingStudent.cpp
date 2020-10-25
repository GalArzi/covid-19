#include "WorkingStudent.h"

WorkingStudent::WorkingStudent():Employee()
{
	same_institute = false;
}
WorkingStudent::WorkingStudent(string _name, long _id, int _age, float av, string ins, float _salary, bool _same):Student(_name,_id,_age,av,ins)
{
	salary = _salary;
	same_institute = _same;
}
WorkingStudent::~WorkingStudent(){}
