#include "Employee.h"

Employee::Employee() : Person() {
	float salary = 0;
}

Employee::Employee(string name, long id, int age, float salary) : Person(name, id, age) {

}

Employee::~Employee() {}


