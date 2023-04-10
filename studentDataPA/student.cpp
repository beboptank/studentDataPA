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
}

Student::Student(int id, string firstName, string lastName, string emailAddress, int age) {
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
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

void Student::SetStudentEmailAddress(string newEmailAddress) {
	emailAddress = newEmailAddress;
}

void Student::SetStudentAge(int newAge) {
	age = newAge;
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

string Student::GetStudentEmailAddress() {
	return emailAddress;
}

int Student::GetStudentAge() {
	return age;
}

// Print

void Student::Print() {
	cout << "Student ID: " << GetStudentID() << endl;
	cout << "First Name: " << GetStudentFirstName() << endl;
	cout << "Last Name: " << GetStudentLastName() << endl;
	cout << "Email address: " << GetStudentEmailAddress() << endl;
	cout << "Age: " << GetStudentAge() << endl;
}
