#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
	string name;
	long id;
	int age;
public:
	Person();
	Person(string, long, int);
	~Person() {}

};

