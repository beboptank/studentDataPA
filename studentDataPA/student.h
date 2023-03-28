#pragma once
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
	string getStudentID() {
		return studentID;
	}

	string getFirstName() {
		return firstName;
	}

	string getLastName() {
		return lastName;
	}
	
	string getEmail() {
		return email;
	}

	int getAge() {
		return age;
	}

	int getNumDaysToFinishCourse() {
		return numDaysToFinishCourse[3];
	}

	DegreeProgram getDegreeProgram() {
		return degree;
	}

	// Setters
	void setStudentID(string id) {
		studentID = id;
	}

	void setFirstName(string nameString) {
		firstName = nameString;
	}

	void setLastName(string nameString) {
		lastName = nameString;
	}

	void setEmail(string emailString) {
		email = emailString;
	}

	void setAge(int ageInt) {
		age = ageInt;
	}

	void setNumDaysToFinishCourse(int array[3]) {
		numDaysToFinishCourse[3] = array[3];
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