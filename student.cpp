#include "degree.h"
#include "student.h"
#include "roster.h"
#include <iostream>
#include <string>
using namespace std;
//constructor
Student::Student(string id, string fname, string lname, string email,
int age, int dayarray, DegreePrograms degreepln){
    this->Id = id;
    this->FName = fname;
    this->LName = lname;
    this->Email = email;
    this->Age = age;
    for (int i = 0; i < 2; ++i) {
	this->DayArray[i] = dayarray[i];
    this->Degree = degreepln;
    }
}
Student::Student() {
	this->Id = "";
	this->FName = "";
	this->LName = "";
	this->Email = "";
	this->Age = 0;
	for (int i = 0; i < 2; ++i) {
		this->DayArray[i] = 0;
	}
	this->Degree = SOFTWARE;
}

//acceseors
string Student::GetId() {
        return Id;
}

string Student::GetFName(){
    return FName;
}

string Student::GetLName(){
    return LName;
}

string Student::GetEmail(){
    return Email;
}

int Student::GetAge(){
    return Age;
}

int* Student::GetDayArray(){
    return this->DayArray;
}

DegreePrograms Student::GetDegree(){
    return Degree;
}
//mutators
void Student::SetId(string id){
    Id = id;
}
void Student::SetFName(string fname){
    FName = fname;
}
void Student::setLName(string lname){
    LName = lname;
}
void Student::SetEmail(string email){
    Email = email;
}
void Student::SetAge(int age){
    Age = age;
}
void Student::SetDayArray(int dayarray[]){
    DayArray[0,1,2] = dayarray[0,1,2];
}
void Student::SetDegree(DegreePrograms degreepln){
    Degree = degreepln;
}

std::string Student::PrintId(){
    cout<<Id<<endl;
    
}
string Student::PrintFName(){
    cout<<FName<<endl;
}
string Student::PrintLName(){
    cout<<LName<<endl;
}
string Student::PrintEmail(){
    cout<<Email<<endl;
}
string Student::PrintAge(){
    cout<<Age<<endl;
}
string Student::PrintDayArray(){
    cout<<DayArray<<endl;
}
string Student::PrintDegree(){
    cout<<Degree<<endl;
}
string Student::printAll(){
    cout<<"ID: "<<Id<<endl;
    cout<<"FName: "<<FName<<endl;
    cout<<"LName: "<<LName<<endl;
    cout<<"Email: "<<Email<<endl;
    cout<<"Age: "<<Age<<endl;
    cout<<"days in course: "<<DayArray<<endl;
    cout<<"Degree: "<<Degree<<endl;
}