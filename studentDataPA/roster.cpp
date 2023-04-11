#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"

using namespace std;

Roster::Roster() {

}

Roster::~Roster() {}

Student** Roster::getStudents() {
	return this->classRosterArray;
}

void Roster::parseData(string row) {
	int start;
	int end;

	end = row.find(",");
	string studentID = row.substr(0, end);
	start = end + 1;
	end = row.find(",", start);

	string firstName = row.substr(start, (end - start));
	start = end + 1;
	end = row.find(",", start);

	string lastName = row.substr(start, (end - start));
	start = end + 1;
	end = row.find(",", start);

	string emailAddress = row.substr(start, (end - start));
	start = end + 1;
	end = row.find(",", start);

	int age = stoi(row.substr(start, (end - start)));

	int days[3];
	for (int i = 0; i < 3; ++i) {
		start = end + 1;
		end = row.find(",", start);
		days[i] = stoi(row.substr(start, (end - start)));
	}

	DegreeProgram studentDegree;

	if (row.back() == 'Y') {
		studentDegree = DegreeProgram::SECURITY;
	}
	else if (row.back() == 'K') {
		studentDegree = DegreeProgram::NETWORK;
	}
	else {
		studentDegree = DegreeProgram::SOFTWARE;
	}

	add(studentID, firstName, lastName, emailAddress, age, days[0], days[1], days[2], studentDegree);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	int numDaysToCompleteCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray[++rosterArrayIndex] = new Student(studentID, firstName, lastName, emailAddress, age, numDaysToCompleteCourse, degreeProgram);
	cout << "Student successfully added to the roster - Row " << rosterArrayIndex + 1 << endl;
}

void Roster::remove(string studentID) {
	//FIXME: remove a student from the roster
}

void Roster::printAll() {

	for (int i = 0; i < 5; ++i) {
		Roster::classRosterArray[i]->print();
	}
}

void printAverageDaysInCourse(string studentID) {
	//FIXME: print the average of the days the student spends in each course
}

void printInvalidEmails() {
	//FIXME: print all invalid email addresses
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	for (int i = 0; i <= Roster::rosterArrayIndex; ++i) {
		if (Roster::classRosterArray[i]->getDegreeProgram() == degreeProgram) {
			classRosterArray[i]->print();
		}
	}
}
