/*2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each instance variable from part D1

b.  a mutator (i.e., setter) for each instance variable from part D1

c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

d.  constructor using all of the input parameters provided in the table

e.  print() to print specific student data

3.  Define the following functions:

a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)  that sets the instance variables from part D1 and updates the roster.

b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.

c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.

d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.

e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
 

Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
 

f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.*/
 
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

	void Student::setEmailAddress(string emailAddress){
		this->emailAddress = emailAddress;
	}

	void Student::setAge(int age){
		this->age = age;
	}

	void Student::setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3){
		this->daysInCourse = {daysInCourse1, daysInCourse2, daysInCourse3};
	}

	void Student::setDegreeProgram(DegreeProgram degreeProgram){
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

	void Student::printAll() {
		cout << getStudentID() << "\t";
		cout << "First Name: " << getFirstName() << "\t";
	}


	

