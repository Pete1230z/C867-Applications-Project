/*D.  For the Student class, do the following:

1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:

•  student ID

•  first name

•   last name

•  email address

•  age

•  array of number of days to complete each course

•  degree program

2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each instance variable from part D1

b.  a mutator (i.e., setter) for each instance variable from part D1

c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

d.  constructor using all of the input parameters provided in the table

e.  print() to print specific student data
 

E.  Create a Roster class (roster.cpp) by doing the following:

1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”

2.  Create a student object for each student in the data table and populate classRosterArray.

a.  Parse each set of data identified in the “studentData Table.”

b.  Add each student object to classRosterArray.*/

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
	public:
	//Mutator Method
	   void setStudentInformation(int StudentID, string firstName, string lastName, string emailAddress, int age, string threecoursesArray[3]);
	   //Accessor Methods
	   int getStudentID() const;
       std::string getfirstName() const;
       std::string getlastName() const;
	   std::string getemailAddress() const;
	   int getAge() const;
	   std::string getthreeCoursesArray() const;
	   void Print() const;
	   private:
	      int ID;
		  std::string fName;
		  std::string lNAME;
		  std::string email;
		  int pvtAge;
		  std::string threecourses;

};

#endif 