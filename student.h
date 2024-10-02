#include <iostream>
#include <string>
#include "degree.h"
#include "roster.h"
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
            void SetDayArray(int dayarray);
            void SetDegree(DegreePrograms degreepln);

            Student();
            Student(string id, string fname, string lname, string email, int age, int dayarray, DegreePrograms degreepln);

            string PrintId();
            string PrintFName();
            string PrintLName();
            string PrintEmail();
            string PrintAge();
            string PrintDayArray();
            string PrintDegree();
            string printAll();

    private:
            string Id;
            string FName;
            string LName;
            string Email;
            int Age;
            int* DayArray;
            DegreePrograms Degree;


};