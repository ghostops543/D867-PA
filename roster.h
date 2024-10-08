#include <string>
#include "student.h"
#include <iostream>
#ifndef roster_h
#define roster_h
using namespace std;

class Roster{
    public:
        void add(string studentID, string firstName, string lastName,
                string emailAddress, int age, int daysInCourse1, int daysInCourse2,
                int daysInCourse3, DegreePrograms degreeProgram);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        Roster(int size);
        string GetID(int i);
        void printInvalidEmails();
        void printByDegreeProgram(DegreePrograms degreeProgram);
        void breakArray(const string studentData);
        Student* ClassRosterArray[5];
        ~Roster();
        int size;
    private:
        int count = -1;
    
};
#endif