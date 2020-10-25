#include "Person.h"
//hello

Person::Person() {
	name = "zohar";
	id = 123456789;
	age = 26;
}
Person::Person(string _name, long _id, int _age):name(_name),id(_id),age(_age) {
	//name = _name;
	//id = _id;
	//age = _age;
}