/*2.  Create each of the following functions in the Student class:

c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

*/

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student {
	public:
	   //d.  constructor using all of the input parameters provided in the table
	   void Student::setStudentInformation(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	   //b.  a mutator (i.e., setter) for each instance variable from part D1
	   void setStudentID(string studentID);
	   void setFirstName(string firstName);
	   void setLastName(string lastName);
	   void setEmailAddress(string emailAddress);
	   void setAge(int age);
	   void setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
	   void setDegreeProgram(DegreeProgram degreeProgram);

	   //a.  an accessor (i.e., getter) for each instance variable from part D1
	   string getStudentID() const;
       string getFirstName() const;
       string getLastName() const;
	   string getEmailAddress() const;
	   int getAge() const;
	   std::array<int, 3> getDaysInCourse() const;
	   void printDaysInCourse() const;
	   DegreeProgram getDegreeProgram() const; 
	   //e.  print() to print specific student data
	   void print();

	   private:
	      string studentID;
		  string firstName;
		  string lastName;
		  string emailAddress;
		  int age;
		  array<int, 3> daysInCourse;
		  DegreeProgram degreeProgram;
};

#endif 