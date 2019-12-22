#define CRT_SECURE_NO_WARNINGS
#ifndef WorkingStudents_h
#define WorkingStudents_h
#include"Employee.h"
#include"Student.h"

class WorkingStudents :public  Employee, public  Student
{
private:
	bool inse;
public:
	WorkingStudents(string _Name, long _ID, int _Age, string _institute, int _average, float _salary, bool ins) :Person(_Name, _ID, _Age), Employee::Employee(_Name, _ID, _Age, _salary), Student::Student(_Name, _ID, _Age, _institute, _average), inse(ins) {};


	virtual void  PrintMe() {

		Student::PrintMe();
		Employee::PrintMe();
		cout << inse << "\n";

	}

};

#endif //WorkingStudents_H

