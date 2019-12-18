#define CRT_SECURE_NO_WARNINGS
#ifndef WorkingStudents_h
#define WorkingStudents_h
#include"Student.h"
#include"Employee.h"

class WorkingStudents :public Employee,public Student
{
private:
	bool inse;
public:
	WorkingStudents(string _Name, long _ID, int _Age, float _salary,string g,int b, bool ins) : Employee::Employee(_Name, _ID, _Age,_salary),Student::Student(_Name,_ID,_Age,g,b),inse(ins) {

	};
};

#endif //WorkingStudents_H
