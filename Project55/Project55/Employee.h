#ifndef Employee_h
#define Employee_h
#include"Person.h"

class Employee :virtual public Person
{
private:
	float salary;
public:
	Employee(string _Name, long _ID, int _Age, float _salary) :Person::Person(_Name, _ID, _Age), salary(_salary) {

	};
	virtual void PrintMe() {
		cout << salary << "\n";
	}
};

#endif //Employee_H

