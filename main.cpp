#include "student.h"
#include "roster.h"
//#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
    cout<<"C867: Scripting And Programing Applications"<<endl;
    cout<<"The programing language used was C++"<<endl;
    cout<<"My Name is Travis Brown"<<endl;
    cout<<"My Student id is 011715813"<<endl;
    cout<<endl;
    
    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Travis,Brown,tbr2583@wgu.edu,20,2,3,4,SOFTWARE"};

    Roster * classRoster = new Roster(5);
    for(int i=0; i<5; ++i){
    classRoster->breakArray(studentData[i]);
    }
    classRoster->printAll();
    cout<<endl;
    cout<<endl;
    classRoster->printInvalidEmails();
    cout<<endl;
    cout<<endl;
    for(int i=0; i<5; ++i){
    classRoster->printAverageDaysInCourse(classRoster->ClassRosterArray[i]->GetId());
    }
    cout<<endl;
    classRoster->printByDegreeProgram(SOFTWARE);
    cout<<endl;
    cout<<endl;
    classRoster->remove("A3");
    cout<<endl;
    cout<<endl;
    classRoster->printAll();
    cout<<endl;
    cout<<endl;
    classRoster->remove("A3");

    classRoster->~Roster();
    delete classRoster;

}