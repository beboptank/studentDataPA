#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
	int id;
	string firstName;
	string lastName;
	string emailAddress;

public:

	// Constructors
	Student();

	Student(int id, string firstName, string lastName, string emailAddress);

	// Setters
	void SetStudentID(int id);

	void SetStudentFirstName(string firstName);

	void SetStudentLastName(string lastName);

	void SetStudentEmailAddress(string emailAddress);

	// Getters
	int GetStudentID();
	
	string GetStudentFirstName();

	string GetStudentLastName();

	string GetStudentEmailAddress();

	// Print
	void Print();
};

#endif