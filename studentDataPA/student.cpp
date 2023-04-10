#include <iostream>
#include <string>
#include "student.h"

using namespace std;

Student::Student() {
	id = -1;
	firstName = "John";
	lastName = "Smith";
}

Student::Student(int id, string firstName, string lastName) {
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
}

// Setters

void Student::SetStudentID(int newId) {
	id = newId;
}

void Student::SetStudentFirstName(string newFirstName) {
	firstName = newFirstName;
}

void Student::SetStudentLastName(string newLastName) {
	lastName = newLastName;
}

// Getters

int Student::GetStudentID() {
	return id;
}

string Student::GetStudentFirstName() {
	return firstName;
}

string Student::GetStudentLastName() {
	return lastName;
}

// Print

void Student::Print() {
	cout << "Student ID: " << GetStudentID() << endl;
	cout << "First Name: " << GetStudentFirstName() << endl;
	cout << "Last Name: " << GetStudentLastName() << endl;
}
