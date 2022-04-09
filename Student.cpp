#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,const char sname[]){
    studentId = sid;
    strcpy(name, sname);
}

// Display StudentId and Name
void Student::display(){
    cout<<"The ID of the student:"<<studentId<<endl;
    cout<<"The name of the student:"<<name<<endl;
}
