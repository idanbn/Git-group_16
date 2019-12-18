//
//  Student.h
//  working stodent
//
//  Created by faruch ismailov on 18/12/2019.
//  Copyright © 2019 faruch ismailov. All rights reserved.
//
#include "Person.h"
#ifndef Student_h
#define Student_h

class Student public Person{
private:
    char institute[10];
    int average;
public:
    Student(char _Name[10],long _ID, int _Age,char _institute[10],int _average):Person( _Name[10],_ID,_Age){
        institute=_institute;
        average=_average;
        
    }
#endif /* Student_h */
