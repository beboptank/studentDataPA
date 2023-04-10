#include <iostream>
#include <string>
#include "student.h"

using namespace std;

Student::Student() {
	id = -1;
	firstName = "John";
}

Student::Student(int id, string firstName) {
	this->id = id;
	this->firstName = firstName;
}

// Setters

void Student::SetStudentID(int newId) {
	id = newId;
}

void Student::SetStudentFirstName(string newFirstName) {
	firstName = newFirstName;
}

// Getters

int Student::GetStudentID() {
	return id;
}

string Student::GetStudentFirstName() {
	return firstName;
}


// Print

void Student::Print() {
	cout << "Student ID: " << GetStudentID() << endl;
	cout << "First Name: " << GetStudentFirstName() << endl;
}
