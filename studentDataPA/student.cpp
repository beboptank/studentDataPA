#include <iostream>
#include <string>
#include "student.h"

using namespace std;

Student::Student() {
	id = -1;
	firstName = "John";
	lastName = "Smith";
	emailAddress = "johnsmith@abc.com";
	age = 30;
	numDaysToCompleteCourse[0] = 0;
	numDaysToCompleteCourse[1] = 1;
	numDaysToCompleteCourse[2] = 2;
	degree = DegreeProgram::SOFTWARE;
}

Student::Student(int id, string firstName, string lastName, string emailAddress, int age, int numDaysToCompleteCourse[], DegreeProgram degree) {
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < DAYS_SIZE; ++i) {
		this->numDaysToCompleteCourse[i] = numDaysToCompleteCourse[i];
	}
	this->degree = degree;
	
}

Student::~Student() {};

// Setters

void Student::SetStudentID(int newId) {
	this->id = newId;
}

void Student::SetStudentFirstName(string newFirstName) {
	this->firstName = newFirstName;
}

void Student::SetStudentLastName(string newLastName) {
	this->lastName = newLastName;
}

void Student::SetStudentEmailAddress(string newEmailAddress) {
	this->emailAddress = newEmailAddress;
}

void Student::SetStudentAge(int newAge) {
	this->age = newAge;
}

void Student::SetNumDaysToCompleteCourse(int numDaysToCompleteCourse[DAYS_SIZE]) {
	for (int i = 0; i < DAYS_SIZE; ++i) {
		this->numDaysToCompleteCourse[i] = numDaysToCompleteCourse[i];
	}
}


void Student::SetDegreeProgram(DegreeProgram newDegree) {
	this->degree = newDegree;
}

// Getters

int Student::GetStudentID() {
	return this->id;
}

string Student::GetStudentFirstName() {
	return this->firstName;
}

string Student::GetStudentLastName() {
	return this->lastName;
}

string Student::GetStudentEmailAddress() {
	return this->emailAddress;
}

int Student::GetStudentAge() {
	return this->age;
}

const int* Student::GetNumDaysToCompleteCourse() {
	return this->numDaysToCompleteCourse;
}

DegreeProgram Student::GetDegreeProgram() {
	return this->degree;
}

// Print

void Student::Print() {
	cout << "Student ID: " << GetStudentID() << endl;
	cout << "First Name: " << GetStudentFirstName() << endl;
	cout << "Last Name: " << GetStudentLastName() << endl;
	cout << "Email address: " << GetStudentEmailAddress() << endl;
	cout << "Age: " << GetStudentAge() << endl;
	cout << "Days left Course 1: " << this->numDaysToCompleteCourse[0] << endl;
	cout << "Days left Course 2: " << this->numDaysToCompleteCourse[1] << endl;
	cout << "Days Left Course 3: " << this->numDaysToCompleteCourse[2] << endl;
	cout << "Degree program: " << degreePrograms[(int)this->degree] << endl;
}
