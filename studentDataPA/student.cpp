#include <iostream>
#include "student.h"

using namespace std;

Student::Student() {
	id = -1;
}

Student::Student(int id) {
	this->id = id;
}

// Setters

void Student::SetStudentID(int newId) {
	id = newId;
}

// Getters

int Student::GetStudentID() {
	return id;
}

// Print

void Student::Print() {
	cout << "Student ID: " << GetStudentID() << endl;
}
