#ifndef Student_h
#define Student_h
#include "Person.h"

class Student :virtual public  Person {
private:
	string institute;
	int average;
public:
	Student(string _Name, long _ID, int _Age, string _institute, int _average) :Person::Person(_Name, _ID, _Age), institute(_institute), average(_average) {}
	string getInstitute() {
		return institute;
	}
	int getAverage() {
		return average;
	}
	virtual void  PrintMe() {
		cout << institute << "\n";
		cout << average << "\n";

	}
};
#endif /* Student_h */
