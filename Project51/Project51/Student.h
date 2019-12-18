#ifndef Student_h
#define Student_h
#include "Person.h"

class Student :public Person{
private:
    srting institute;
    int average;
public:
    Student(string _Name,long _ID, int _Age,string _institute,int _average):Person::Person( _Name,_ID,_Age), institute(_institute),average(_average){};
};
#endif /* Student_h */
