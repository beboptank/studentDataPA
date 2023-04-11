#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"

class Roster {
private:
	const static int numStudents = 5;
	Student* classRosterArray[numStudents] = { nullptr, nullptr, nullptr, nullptr, nullptr };

public:
	Roster();

	Student** getStudents();

	void parseData(string row);

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
};

#endif