#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

class Student {

public:
	const static int DAYS_SIZE = 3;

private:
	int id;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToCompleteCourse[DAYS_SIZE];
	DegreeProgram degree;

public:

	// Constructors
	Student();

	Student(int id, string firstName, string lastName, string emailAddress, int age, int numDaysToCompleteCourse[], DegreeProgram degree);

	~Student();

	// Setters
	void SetStudentID(int id);

	void SetStudentFirstName(string firstName);

	void SetStudentLastName(string lastName);

	void SetStudentEmailAddress(string emailAddress);

	void SetStudentAge(int age);

	void SetNumDaysToCompleteCourse(int numDaysToCompleteCourse[]);

	void SetDegreeProgram(DegreeProgram degree);

	// Getters
	int GetStudentID();
	
	string GetStudentFirstName();

	string GetStudentLastName();

	string GetStudentEmailAddress();

	int GetStudentAge();

	const int* GetNumDaysToCompleteCourse();

	DegreeProgram GetDegreeProgram();

	// Print
	void Print();
};

#endif