//#include "degree.h"
#include "student.h"
//#include "roster.h"
#include <iostream>
#include <string>
using namespace std;
//constructors
Student::Student(string id, string fname, string lname, string email,
int age, int dayarray[], DegreePrograms degreepln){
    this->id = id;
    this->fname = fname;
    this->lname = lname;
    this->email = email;
    this->age = age;
    this->dayarray[0] = dayarray[0];
    this->dayarray[1] = dayarray[1];
    this->dayarray[2] = dayarray[2];
    this->Degree = degreepln;
}
Student::Student() {
	this->id = "";
	this->fname = "";
	this->lname = "";
	this->email = "";
	this->age = 0;
	for (int i = 0; i < 3; ++i) {
		this->dayarray[i] = 0;
	}
	this->Degree = NONE;
    return;
}

//acceseors
string Student::GetId(){
    return id;
}

string Student::GetFName(){
    return fname;
}

string Student::GetLName(){
    return lname;
}

string Student::GetEmail(){
    return email;
}

int Student::GetAge(){
    return age;
}

int* Student::GetDayArray(){
    return this->dayarray;
}

DegreePrograms Student::GetDegree(){
    return this->Degree;
}
//mutators
void Student::SetId(string id){
    this->id = id;
    return;
}
void Student::SetFName(string fname){
    this->fname = fname;
    return;
}
void Student::setLName(string lname){
    this->lname = lname;
    return;
}
void Student::SetEmail(string email){
    this->email = email;
    return;
}
void Student::SetAge(int age){
    this->age = age;
    return;
}
void Student::SetDayArray(int day1,int day2,int day3){
    this->dayarray[0] = day1;
    this->dayarray[1] = day2;
    this->dayarray[2] = day3;
    return;
}
void Student::SetDegree(DegreePrograms degreepln){
    this->Degree = degreepln;
    return;
}

void Student::PrintId(){
    cout<<id<<endl;
    return;
}
void Student::PrintFName(){
    cout<<fname<<endl;
    return;
}
void Student::PrintLName(){
    cout<<lname<<endl;
    return;
}
void Student::PrintEmail(){
    cout<<email<<endl;
    return;
}
void Student::PrintAge(){
    cout<<age<<endl;
    return;
}
void Student::PrintDayArray(){
    cout<<dayarray<<endl;
    return;
}
void Student::PrintDegree(){
    cout<<Degree<<endl;
    return;
}
void Student::print(){
    cout<<"ID: "<<GetId()<<endl;
    cout<<"FName: "<<GetFName()<<endl;
    cout<<"LName: "<<GetLName()<<endl;
    cout<<"Email: "<<GetEmail()<<endl;
    cout<<"Age: "<<GetAge()<<endl;
    cout<<"days in course: "<<GetDayArray()[0]<<", "<<GetDayArray()[1]<<", "<<GetDayArray()[2]<<endl;
    cout<<"Degree: "<<degreedict[GetDegree()]<<endl;
    cout<<endl;
    return;
}