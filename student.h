#include <iostream>
#include <string>
#include "degree.h"
#ifndef student_h
#define student_h
//#include "roster.h"
using namespace std;

class Student{
    public:

            // accsesors for all the variables
            string GetId();
            string GetFName();
            string GetLName();
            string GetEmail();
            int GetAge();
            int* GetDayArray();
            DegreePrograms GetDegree();

            //mutators for all the variables
            void SetId(string id);
            void SetFName(string fname);
            void setLName(string lname);
            void SetEmail(string email);
            void SetAge(int age);
            void SetDayArray(int day1, int day2, int day3);
            void SetDegree(DegreePrograms degreepln);

            Student();
            Student(string id, string fname, string lname, string email, int age, int dayarray[], DegreePrograms degreepln);

            void PrintId();
            void PrintFName();
            void PrintLName();
            void PrintEmail();
            void PrintAge();
            void PrintDayArray();
            void PrintDegree();
            void print();

    private:
            string id;
            string fname;
            string lname;
            string email;
            int age;
            int dayarray[3];
            DegreePrograms Degree;


};
#endif