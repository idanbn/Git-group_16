#ifndef Person_h
#define Person_h

#include <iostream>
using namespace std;

class Person {
private:
	string Name;
	long ID;
	int Age;
public:
	Person(string _Name, long _ID, int _Age) {
		Name = _Name;
		ID = _ID;
		Age = _Age;

	}
};
#endif /* Person_h */
