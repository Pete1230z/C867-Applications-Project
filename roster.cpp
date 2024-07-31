/*E.  Create a Roster class (roster.cpp) by doing the following:

1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”

2.  Create a student object for each student in the data table and populate classRosterArray.

a.  Parse each set of data identified in the “studentData Table.”

b.  Add each student object to classRosterArray.

3.  Define the following functions:

a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)  that sets the instance variables from part D1 and updates the roster.

b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.

c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.

d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.

e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
 

Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
 

f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.*/

#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"

using namespace std;

void Roster::parse(string studentData) {
	//Array to hold parsed data
	string parsedData[9];
	size_t pos = 0;
	string delimiter = ",";
	// Parse all data in the setStudentInformation constructor
    for(int i = 0; i < 9; i++) { 
		pos =studentData.find(delimiter);
		parsedData[i] = studentData.substr(0,pos);
		studentData.erase(0, pos + delimiter.length());
	} 
		//Ensures the last element is added because the last element does not have a comma
		parsedData[8] = studentData;
	
	//Parse degreeProgram
	if(studentData.back() == 'Y') {
		degreeProgram = SECURITY;
	} else if (studentData.back() == 'K'){ 
		degreeProgram = NETWORK;
	} else if (studentData.back() == 'E') {
		degreeProgram = SOFTWARE;
	}
	// Add student to classRosterArray
	add(parsedData[0], parsedData[1], parsedData[2], parsedData[3], stoi(parsedData[4]), stoi(parsedData[5]), stoi(parsedData[6]), stoi(parsedData[7]), degreeProgram);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
	classRosterArray[index] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
	index++;
}

void Roster::removeByID(string studentID) {
	//If set to less than or equal to numStudents, it will go out of bounds
	//Need only to check if the student is found
	bool studentFound = false;
	for(int i = 0; i < numStudents; i++) {
		if(classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID) {
			classRosterArray[i] = nullptr;
			studentFound = true;
		}
	}
	//Needs to be outside of the loop to print only once
	if(!studentFound) {
		cout << "Student not found." << endl;
	}
}

void Roster::printAll() {
	for(int i = 0; i < numStudents; i++) {
		cout << classRosterArray[i]->getStudentID() << '\t';
		cout << "First Name: " << classRosterArray[i]->getFirstName() << '\t';
		cout << "Last Name: " << classRosterArray[i]->getLastName() << '\t';
		cout << "Email Address: " << classRosterArray[i]->getEmailAddress() << '\t';
		cout << "Age: " << classRosterArray[i]->getAge() << '\t';
		cout << "daysInCourse: {" << classRosterArray[i]->printDaysInCourse() << "}" << '\t';
		cout << DegreeProgram[classRosterArray[i]->getDegreeProgram()] << endl;	
	}
}

void Roster::printAverageDaysInCourse(string studentID) {
	int sum = 0;
	int average = 0;
	for(int i = 0; i < numStudents; i++) {
		if(classRosterArray[i]->getStudentID() == studentID) {
			for(int j = 0; j < 3; j++) {
				sum += classRosterArray[i]->getDaysInCourse()[j];
				average = sum / 3;
			}
		}
	}
	cout << studentID << " Average Days in Course: " << average << endl;
}

void Roster::printInvalidEmails() {
	for(int i = 0; i < numStudents; i++) {
		if(classRosterArray[i]->getEmailAddress().find('@') == string::npos || classRosterArray[i]->getEmailAddress().find('.') == string::npos || classRosterArray[i]->getEmailAddress().find(' ') != string::npos) {
			cout << classRosterArray[i]->getEmailAddress() << " is an invalid email address" << endl;
		}
	}
}
