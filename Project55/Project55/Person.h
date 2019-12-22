#ifndef Person_h
#define Person_h

#include <iostream>
using namespace std;

class  Person {
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

	void Print() {
		cout << Name << "\n";
		cout << ID << "\n";
		cout << Age << "\n";
		PrintMe();
	}
	virtual void  PrintMe() {
	}
};
#endif /* Person_h */
