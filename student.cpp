/*2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each instance variable from part D1

b.  a mutator (i.e., setter) for each instance variable from part D1

c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

d.  constructor using all of the input parameters provided in the table

e.  print() to print specific student data*/
 
#include <iostream>
#include "student.h"
#include <string>
#include <array> // Include the array header
using namespace std;

void Student::setStudentInformation(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram){
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysInCourse = {daysInCourse1, daysInCourse2, daysInCourse3};
	this->degreeProgram = degreeProgram;
}

void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
	this->daysInCourse = {daysInCourse1, daysInCourse2, daysInCourse3};
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

string Student::getStudentID() const {
	return studentID;
}

string Student::getFirstName() const {
	return firstName;
}

string Student::getLastName() const {
	return lastName;
}

string Student::getEmailAddress() const {
	return emailAddress;
}

int Student::getAge() const {
	return age;
}

array<int, 3> Student::getDaysInCourse() const {
	return daysInCourse;
}

void Student::printDaysInCourse() const {
	for (int i = 0; i < 3; i++) {
		cout << daysInCourse[i] << " ";
	}
}

DegreeProgram Student::getDegreeProgram() const {
	return degreeProgram;
}

void Student::print() {
	cout << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << '\t';
	cout << "Last Name: "  << getLastName() << '\t';
	cout << "Email Address: " << getEmailAddress() << '\t';
	cout << "Age: " << age << "\t";
	cout << "daysInCourse: {";
	printDaysInCourse();
	cout << "} ";
	cout << "Degree Program: " << degreeProgram << endl;
}


	

