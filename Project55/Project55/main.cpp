


//#include"Person.h"

#include <iostream>
#include <string>
//#include "Person.h"
#include "Employee.h"
#include "WorkingStudents.h"
using namespace std;

int main() {

	int num_of_persons;

	cout << "Enter num of person's: ";
	cin >> num_of_persons;


	Person **arr;
	string Name;
	long ID;
	int Age;
	float salary;
	string institute;
	int average;
	char Y_N, Y_N2;

	arr = new Person*[num_of_persons];
	for (int i = 0; i < num_of_persons; i++) {
		cout << "The person is Student?  y/n: ";
		cin >> Y_N;

		if (Y_N == 'Y' || Y_N == 'y') {

			cout << "The Student is working?  y/n: ";
			cin >> Y_N2;
			if (Y_N2 == 'Y' || Y_N2 == 'y') {

				cout << "Enter Student name: ";
				cin >> Name;
				cout << "Enter Student ID: ";
				cin >> ID;
				cout << "Enter Student Age: ";
				cin >> Age;
				cout << "Enter Student institute: ";
				cin >> institute;
				cout << "Enter Student average: ";
				cin >> average;
				cout << "Enter person salary: ";
				cin >> salary;
				arr[i] = new WorkingStudents(Name, ID, Age, institute, average, salary, true);
				
			}
			else {

				cout << "Enter Student name: ";
				cin >> Name;
				cout << "Enter Student ID: ";
				cin >> ID;
				cout << "Enter Student Age: ";
				cin >> Age;
				cout << "Enter Student institute: ";
				cin >> institute;
				cout << "Enter Student average: ";
				cin >> average;
				
				arr[i] = new Student(Name, ID, Age, institute, average);
				
				

			}


		}
		else {


			cout << "Enter person name: ";
			cin >> Name;
			cout << "Enter person ID: ";
			cin >> ID;
			cout << "Enter person Age: ";
			cin >> Age;
			cout << "Enter person salary: ";
			cin >> salary;

			arr[i] = new Employee(Name, ID, Age, salary);

		}

	}
	arr[0]->Print();
	int x;
	cin >>x;


	return 0;
}



