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
	int numDaysToFinishCouse[10];
	DegreeProgram degree;

public:
	// Setters
	void setStudentID(int id) {
		studentID = id;
	}


};