#include "roster.h"
#include "student.h"
#include "degree.h"
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
            }

void Roster::remove(string studentID){
    for(int i=0; i < 4; ++i)
    {
        if(studentID == ClassRosterArray[i]->GetId())
        {
            ClassRosterArray[i] = nullptr;
        }
        else
        {
            int temp=0;
            ++temp;

            if(temp = 5)
            {
                cout<<"There are no records with that studentId"<<endl;
                break;
            }

        }
    }
}
void Roster::printAll()
{
    for(int i=0; i < 4;++i)
    {
        ClassRosterArray[i]->printAll();
    }
}
void Roster::printAverageDaysInCourse(string studentID)
{
    for(int i=0; i < 4; ++i)
    {
        if(studentID == ClassRosterArray[i]->GetId())
        {
          int day1 = ClassRosterArray[i]->GetDayArray()[0];
          int day2 = ClassRosterArray[i]->GetDayArray()[1];
          int day3 = ClassRosterArray[i]->GetDayArray()[2];
          int avg = ((day1+day2+day3)/3);
          cout<<"the avergae amount of days spent on a class was"<<avg<<endl; 
        }
    }
}
void Roster::printInvalidEmails()
{
    for(int i=0; i< 4; ++i)
    {
        
        string email = ClassRosterArray[i]->GetEmail();
        if(email.find('@') == string::npos)
        {
            cout<<"the email adress "<<email<<" is invalid"<<endl;
        }
        else if(email.find(' ') ==! string::npos)
        {
            cout<<"the email adress "<<email<<" is invalid"<<endl;
        }
        else if(email.find('.') == string::npos)
        {
            cout<<"the email adress "<<email<<" is invalid"<<endl;
        }    
    }
}
void Roster::printByDegreeProgram(DegreePrograms degreeProgram)
{
    for(int i=0; i< 4; ++i)
    {
        if(ClassRosterArray[i]->GetDegree()== degreeProgram){
            ClassRosterArray[i]->printAll();
        }
    }
}
string Roster::breakArray(string student)
{
    int split = student.find(",");
    int start = 0;
    static string array[8];
    for (int i=0; i<8; i++)
    {
        array[i] = student.substr(start,split-start);
        start = 1 + split;
        split = student.find(",",start);

    }
    return *array;
}
#endif