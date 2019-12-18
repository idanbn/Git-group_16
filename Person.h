//
//  Person.h
//  working stodent
//
//  Created by faruch ismailov on 18/12/2019.
//  Copyright © 2019 faruch ismailov. All rights reserved.
//

#ifndef Person_h
#define Person_h

class Person{
private:
    char Name[10];
    long ID;
    int Age;
public:
    Person(char _Name[10],_ID,_Age){
        Name=_Name;
        ID=_ID;
        Age=_Age;
        
    }
}
#endif /* Person_h */
