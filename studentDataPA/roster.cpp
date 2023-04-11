#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"

using namespace std;

Roster::Roster() {

}

Roster::~Roster() {
	for (int i = 0; i < numStudents; ++i) {
		cout << "Destructor called: Student " << classRosterArray[i]->getStudentID() << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}

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

	bool removed = false;

	for (int i = 0; i <= Roster::rosterArrayIndex; ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			removed = true;
			Student* tempStudent = classRosterArray[i];
			classRosterArray[i] = classRosterArray[numStudents - 1];
			classRosterArray[numStudents - 1] = tempStudent;
			Roster::rosterArrayIndex--;
		}
	}
}

void Roster::printAll() {

	for (int i = 0; i <= Roster::rosterArrayIndex; ++i) {
		Roster::classRosterArray[i]->print();
	}
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i <= Roster::rosterArrayIndex; ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			cout << "Student " << studentID << "'s course days average: ";
			cout << (classRosterArray[i]->getNumDaysToCompleteCourse()[0] +
				classRosterArray[i]->getNumDaysToCompleteCourse()[1] +
				classRosterArray[i]->getNumDaysToCompleteCourse()[2]) / 3.0 << endl;
		}
	}
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
