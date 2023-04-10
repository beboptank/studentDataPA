#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
	int id;
	string firstName;
	string lastName;

public:

	// Constructors
	Student();

	Student(int id, string firstName, string lastName);

	// Setters
	void SetStudentID(int id);

	void SetStudentFirstName(string firstName);

	void SetStudentLastName(string lastName);

	// Getters
	int GetStudentID();
	
	string GetStudentFirstName();

	string GetStudentLastName();

	// Print
	void Print();
};

#endif