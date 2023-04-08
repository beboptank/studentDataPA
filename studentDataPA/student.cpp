#include <iostream>
#include <string>
#include "../studentDataPA/degree.h"
#include "student.h"
using namespace std;

// Getters
string Student::GetStudentID() {
	return studentID;
}

string Student::GetFirstName() {
	return firstName;
}

string Student::GetLastName() {
	return lastName;
}	

string Student::GetEmail() {
	return email;
}

int Student::GetAge() {
	return age;
}

int Student::GetNumDaysToFinishCourse() {
	return numDaysToFinishCourse[3];
}

DegreeProgram Student::GetDegreeProgram() {
	return degree;
}

// Setters
void Student::SetStudentID(string id) {
	studentID = id;
}

void Student::SetFirstName(string nameString) {
	firstName = nameString;
}

void Student::SetLastName(string nameString) {
	lastName = nameString;
}

void Student::SetEmail(string emailString) {
	email = emailString;
}

void Student::SetAge(int ageInt) {
	age = ageInt;
}

void Student::SetNumDaysToFinishCourse(int array[3]) {
	numDaysToFinishCourse[3] = array[3];
}

void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
	degree = degreeProgram;
}

// Print

void Student::Print() {
	cout << "Student ID: " << GetStudentID() << endl;
	cout << "Name: " << GetFirstName() << " " << GetLastName() << endl;
	cout << "Email: " << GetEmail() << endl;
	cout << "Age: " << GetAge() << endl;
	cout << "Days to finish course: " << GetNumDaysToFinishCourse() << endl;
	cout << "Degree: " << GetDegreeProgram() << endl;
}
