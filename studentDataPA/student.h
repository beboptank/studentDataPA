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
	string id;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToCompleteCourse[DAYS_SIZE];
	DegreeProgram degree;

public:

	// Constructors
	Student();

	Student(string id, string firstName, string lastName, string emailAddress, int age, int numDaysToCompleteCourse[], DegreeProgram degree);

	~Student();

	// Setters
	void setStudentID(string id);

	void setStudentFirstName(string firstName);

	void setStudentLastName(string lastName);

	void setStudentEmailAddress(string emailAddress);

	void setStudentAge(int age);

	void setNumDaysToCompleteCourse(int numDaysToCompleteCourse[]);

	void setDegreeProgram(DegreeProgram degree);

	// Getters
	string getStudentID();
	
	string getStudentFirstName();

	string getStudentLastName();

	string getStudentEmailAddress();

	int getStudentAge();

	const int* getNumDaysToCompleteCourse();

	DegreeProgram getDegreeProgram();

	// Print
	void print();
};

#endif