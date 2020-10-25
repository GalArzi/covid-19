#include <iostream>
#include	"Person.h"
#include	"Student.h"
#include	"Employee.h"
#include	"WorkingStudent.h"

using namespace std;

int main() {
	int people=4, type;
	int age;
	long id;
	string name, institute;
	float salary, average;
	bool same;
	Person** arr = new Person*[people];
	for (int i = 0; i < people; i++) {
		cout << ("What type of person are you?") << endl;
		cout << ("1 - Just a person\n2 - Student\n3 - Employee\n4 - Working student\n");
		cin >> type;
		switch (type)
		{
		case 1:
			cout << "Name: ";	cin >> name;
			cout << "\nID: ";	cin >> id;
			cout << "\nAge: ";	cin >> age;
			*arr[i] = Person(name, id, age);
			break;
		case 2:
			cout << "Name: ";		cin >> name;
			cout << "\nID: ";		cin >> id;
			cout << "\nAge: ";		cin >> age;
			cout << "\nAverage: ";	cin >> average;
			cout << "\nInstitute: ";cin >> institute;
			*arr[i] = Student(name, id, age, average, institute);
			break;
		case 3:break;
			cout << "Name: ";		cin >> name;
			cout << "\nID: ";		cin >> id;
			cout << "\nAge: ";		cin >> age;
			cout << "\nSalary: ";	cin >> salary;
			*arr[i] = Employee(name, id, age, salary);
		case 4:break;
			cout << "Name: ";		cin >> name;
			cout << "\nID: ";		cin >> id;
			cout << "\nAge: ";		cin >> age;
			cout << "\nAverage: ";	cin >> average;
			cout << "\nInstitute: "; cin >> institute;
			cout << "\nSalary: ";	cin >> salary;
			cout << "\nSame Intitute: "; cin >> same;
			//*arr[i] = WorkingStudent(name, id, age, average, institute, salary, same);
		default: cout << "no\n";	break;
		}
	}

	return 0;
}
