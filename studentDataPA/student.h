#pragma once
#include <iostream>
#include <string>
#include "../studentDataPA/degree.h"
using namespace std;

class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int numDaysToFinishCourse[3];
	DegreeProgram degree;

public:
	// Getters
	string GetStudentID() {
		return studentID;
	}

	string GetFirstName() {
		return firstName;
	}

	string GetLastName() {
		return lastName;
	}
	
	string GetEmail() {
		return email;
	}

	int GetAge() {
		return age;
	}

	int GetNumDaysToFinishCourse() {
		return numDaysToFinishCourse[3];
	}

	DegreeProgram GetDegreeProgram() {
		return degree;
	}

	// Setters
	void SetStudentID(string id) {
		studentID = id;
	}

	void SetFirstName(string nameString) {
		firstName = nameString;
	}

	void SetLastName(string nameString) {
		lastName = nameString;
	}

	void SetEmail(string emailString) {
		email = emailString;
	}

	void SetAge(int ageInt) {
		age = ageInt;
	}

	void SetNumDaysToFinishCourse(int array[3]) {
		numDaysToFinishCourse[3] = array[3];
	}

	void SetDegreeProgram(DegreeProgram degreeProgram) {
		degree = degreeProgram;
	}

	// Print

	void print() {
		cout << "Student ID: " << GetStudentID() << endl;
		cout << "Name: " << GetFirstName() << " " << GetLastName() << endl;
		cout << "Email: " << GetEmail() << endl;
		cout << "Age: " << GetAge() << endl;
		cout << "Days to finish course: " << GetNumDaysToFinishCourse() << endl;
		cout << "Degree: " << GetDegreeProgram() << endl;
	}

	// Constructor

	Student(string id, string first, string last, string emailAddress, int studentAge, int numDaysToFinishCourseArray[3], DegreeProgram degreeProgram) {
		studentID = id;
		firstName = first;
		lastName = last;
		email = emailAddress;
		age = studentAge;
		numDaysToFinishCourse[3] = numDaysToFinishCourseArray[3];
		degree = degreeProgram;
	}
};