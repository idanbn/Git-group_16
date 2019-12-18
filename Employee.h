#define CRT_SECURE_NO_WARNINGS
#ifndef Employee_h
#define Employee_h
#include"Person.h"

class Employee :public Person 
{
private:
	float salary;
public:
	Employee(string _Name, long _ID, int _Age, float _salary) :Person::Person(_Name, _ID, _Age), salary(_salary){

	};
};

#endif //Employee_H