#include <iostream>
#include <string>
#include "student.h"

using namespace std;

// Default constructor
Student::Student() {
	id = "A-1";
	firstName = "John";
	lastName = "Smith";
	emailAddress = "johnsmith@abc.com";
	age = 30;
	numDaysToCompleteCourse[0] = 0;
	numDaysToCompleteCourse[1] = 1;
	numDaysToCompleteCourse[2] = 2;
	degree = DegreeProgram::SOFTWARE;
}

// Overloaded constructor
Student::Student(string id, string firstName, string lastName, string emailAddress, int age, int numDaysToCompleteCourse[], DegreeProgram degree) {
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

// Destructor
Student::~Student() {};

// Setters

void Student::setStudentID(string newId) {
	this->id = newId;
}

void Student::setStudentFirstName(string newFirstName) {
	this->firstName = newFirstName;
}

void Student::setStudentLastName(string newLastName) {
	this->lastName = newLastName;
}

void Student::setStudentEmailAddress(string newEmailAddress) {
	this->emailAddress = newEmailAddress;
}

void Student::setStudentAge(int newAge) {
	this->age = newAge;
}

void Student::setNumDaysToCompleteCourse(int numDaysToCompleteCourse[DAYS_SIZE]) {
	for (int i = 0; i < DAYS_SIZE; ++i) {
		this->numDaysToCompleteCourse[i] = numDaysToCompleteCourse[i];
	}
}


void Student::setDegreeProgram(DegreeProgram newDegree) {
	this->degree = newDegree;
}

// Getters

string Student::getStudentID() {
	return this->id;
}

string Student::getStudentFirstName() {
	return this->firstName;
}

string Student::getStudentLastName() {
	return this->lastName;
}

string Student::getStudentEmailAddress() {
	return this->emailAddress;
}

int Student::getStudentAge() {
	return this->age;
}

const int* Student::getNumDaysToCompleteCourse() {
	return this->numDaysToCompleteCourse;
}

DegreeProgram Student::getDegreeProgram() {
	return this->degree;
}

// Print

void Student::print() {
	cout << getStudentID() << '\t';
	cout << getStudentFirstName() << '\t';
	cout << getStudentLastName() << '\t';
	cout << getStudentEmailAddress() << '\t';
	cout << getStudentAge() << '\t';
	cout << this->numDaysToCompleteCourse[0] << '\t';
	cout << this->numDaysToCompleteCourse[1] << '\t';
	cout << this->numDaysToCompleteCourse[2] << '\t';
	cout << degreePrograms[(int)this->degree] << endl;
}
