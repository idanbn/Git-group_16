#define CRT_SECURE_NO_WARNINGS
#ifndef WorkingStudents_h
#define WorkingStudents_h
#include"Person.h"
#include"Employee.h"

class WorkingStudents :public Employee,public Person
{
private:
	bool inse;
public:
	WorkingStudents(string _Name, long _ID, int _Age, float _salary, bool ins) : Employee::Employee(_Name, _ID, _Age,_salary),Person::Person(_Name, _ID, _Age) ,inse(ins) {

	};
};

#endif //WorkingStudents_H
