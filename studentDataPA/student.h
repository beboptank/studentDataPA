#pragma once
#include <string>
#include "../studentDataPA/degree.h"
using namespace std;

class Student {
private:
	int studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int numDaysToFinishCourse[9];
	DegreeProgram degree;

public:
	// Setters
	void setStudentID(int id) {
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

	void setNumDaysToFinishCourse(int array[9]) {
		numDaysToFinishCourse[9] = array[9];
	}
};