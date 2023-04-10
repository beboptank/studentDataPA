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
	int age;

public:

	// Constructors
	Student();

	Student(int id, string firstName, string lastName, string emailAddress, int age);

	// Setters
	void SetStudentID(int id);

	void SetStudentFirstName(string firstName);

	void SetStudentLastName(string lastName);

	void SetStudentEmailAddress(string emailAddress);

	void SetStudentAge(int age);

	// Getters
	int GetStudentID();
	
	string GetStudentFirstName();

	string GetStudentLastName();

	string GetStudentEmailAddress();

	int GetStudentAge();

	// Print
	void Print();
};

#endif