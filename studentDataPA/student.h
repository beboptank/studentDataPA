#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
	int id;
	string firstName;

public:

	// Constructors
	Student();

	Student(int id, string firstName);

	// Setters
	void SetStudentID(int id);

	void SetStudentFirstName(string firstName);

	// Getters
	int GetStudentID();
	
	string GetStudentFirstName();

	// Print
	void Print();
};

#endif