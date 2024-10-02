#include <string>
#include "degree.h"
#include <iostream>
using namespace std;

class Roster{
    public:
        void add(string studentID, string firstName, string lastName,
                string emailAddress, int age, int daysInCourse1, int daysInCourse2,
                int daysInCourse3, DegreePrograms degreeProgram);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreePrograms degreeProgram);
        string breakArray(string student);
        string parse(string studentData[]);
        Student* ClassRosterArray[5];
    private:
        int count = -1;
    
};