#include "roster.h"
//#include "student.h"
//#include "degree.h"
#include <iostream>
#ifndef Roster_h
#define Roster_h
using namespace std;

void Roster::add(string studentID, string firstName, string lastName,
            string emailAddress, int age, int daysInCourse1, int daysInCourse2,
            int daysInCourse3, DegreePrograms degreeProgram)
            {
                int DayArray[] ={daysInCourse1, daysInCourse2, daysInCourse3};
                ClassRosterArray[++count] = new Student(studentID, firstName, lastName, emailAddress, age, DayArray, degreeProgram);
                return;   
            }

void Roster::remove(string studentID){
    bool temp= false;
    for(int i=0; i < size; ++i)
    {
        if(ClassRosterArray[i] == nullptr){
            continue;
        }
        else if(studentID == ClassRosterArray[i]->GetId())
        {
            ClassRosterArray[i] = nullptr;
            temp = true;
            break;
        }
        
    }
    if(temp == true){
        cout<<"The student was deleted"<<endl;
    }
    else if(temp == false){
        cout<<"could not find student with that id"<<endl;
    }
    return;
}
void Roster::printAll()
{
    for(int i=0; i < size;++i)
    {
        if (ClassRosterArray[i] == nullptr){
            continue;
        }
        else{
        ClassRosterArray[i]->print();
        }
    }
    return;
}
Roster::Roster(int size){
    this->size = size;
        for (int i = 0; i < size; i++) {
		this->ClassRosterArray[i] = new Student;
	}
	return;

}
void Roster::printAverageDaysInCourse(string studentID)
{
    for(int i=0; i < size; ++i)
    {
        if(studentID == ClassRosterArray[i]->GetId())
        {

          int day1 = ClassRosterArray[i]->GetDayArray()[0];
          int day2 = ClassRosterArray[i]->GetDayArray()[1];
          int day3 = ClassRosterArray[i]->GetDayArray()[2];
          int avg = ((day1+day2+day3)/3);
          cout<<"the average amount of days spent on a class by "<<ClassRosterArray[i]->GetFName()<<" was "<<avg<<endl; 
        }
    }
    return;
}
void Roster::printInvalidEmails()
{
    for(int i=0; i< size; ++i)
    {
        
        string email = ClassRosterArray[i]->GetEmail();
        if(email.find('@') == string::npos)
        {
            cout<<"the email adress "<<email<<" is missing a @ sign"<<endl;
        }
        else if(email.find(' ') != string::npos)
        {
            cout<<"the email adress "<<email<<" has a space in it"<<endl;
        }
        else if(email.find('.') == string::npos)
        {
            cout<<"the email adress "<<email<<" is missing the ."<<endl;
        }    
    }
    return;
}
void Roster::printByDegreeProgram(DegreePrograms degreeProgram)
{
    for(int i=0; i< size; ++i)
    {
        if(ClassRosterArray[i]->GetDegree()== degreeProgram){
            ClassRosterArray[i]->print();
        }
    }
    return;
}
void Roster::breakArray(const string studentData)
{
    DegreePrograms degree = NONE;
    int start = 0;
    int split = studentData.find(",");


    string id = studentData.substr(start,split-start);
    start = 1 + split;
    split = studentData.find(",",start);

    string fname = studentData.substr(start,split-start);
    start = 1 + split;
    split = studentData.find(",",start);

    string lname = studentData.substr(start,split-start);
    start = 1 + split;
    split = studentData.find(",",start);

    string email = studentData.substr(start,split-start);
    start = 1 + split;
    split = studentData.find(",",start);

    int num = stoi(studentData.substr(start,split-start));
    start = 1 + split;
    split = studentData.find(",",start);            

    int day1 = stoi(studentData.substr(start,split-start));
    start = 1 + split;
    split = studentData.find(",",start);

    int day2 = stoi(studentData.substr(start,split-start));
    start = 1 + split;
    split = studentData.find(",",start);

    int day3 = stoi(studentData.substr(start,split-start));
    start = 1 + split;
    split = studentData.find(",",start);
    
    if(studentData.substr(start,split-start) == "SOFTWARE"){
        degree = SOFTWARE;
        }
    else if(studentData.substr(start,split-start) == "NETWORK"){
        degree = NETWORK;
        }
    else if(studentData.substr(start,split-start) == "SECURITY"){
        degree = SECURITY;
        }
    add(id,fname,lname,email,num,day1,day2,day3,degree);
}

Roster::~Roster()
{
	for (int i = 0; i < size; ++i) {
		delete ClassRosterArray[i];
	}
}
#endif