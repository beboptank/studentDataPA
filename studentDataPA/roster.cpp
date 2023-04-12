#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"

using namespace std;


// Student data for use in Roster object
const string studentData[] =

{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Seth,Christmus,schr297@wgu.edu,31,40,23,32,SOFTWARE"
};

// Default constructor
Roster::Roster() {
	for (int i = 0; i < numStudents; i++) {
		Roster::parseData(studentData[i]);
	}
}

// Destructor
Roster::~Roster() {
	for (int i = 0; i < numStudents; i++) {
		cout << "Destructor called: Student " << classRosterArray[i]->getStudentID() << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}

// Returns an array of all students
Student** Roster::getStudents() {
	return this->classRosterArray;
}

// Parses through strings in studentData array by using substr, find, and back methods
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

// Adds a student to the classRosterArray; called at the end of parseData method
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	int numDaysToCompleteCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray[++rosterArrayIndex] = new Student(studentID, firstName, lastName, emailAddress, age, numDaysToCompleteCourse, degreeProgram);
	cout << "Student successfully added to the roster - Row " << rosterArrayIndex + 1 << endl;
}

/* Removes a student by their studentID("A1", "A2", etc.); Swaps student with last student in list,
   then decrements the global variable rosterArrayIndex to prevent last student (which is now the 
   student that was passed by ID as an argument) from being displayed*/
void Roster::remove(string studentID) {

	bool removed = false;

	for (int i = 0; i <= Roster::rosterArrayIndex; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			removed = true;
			Student* tempStudent = classRosterArray[i];
			classRosterArray[i] = classRosterArray[numStudents - 1];
			classRosterArray[numStudents - 1] = tempStudent;
			Roster::rosterArrayIndex--;
		}
	}

	if (removed) {
		cout << "Student removed from roster." << endl;
	}
	else {
		cout << "No student with that ID found." << endl;
	}
}

// Prints all students that have not been removed from the roster
void Roster::printAll() {

	for (int i = 0; i <= Roster::rosterArrayIndex; i++) {
		Roster::classRosterArray[i]->print();
	}
}

// Averages and then prints the number of days that a particular students spends in each course
void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i <= Roster::rosterArrayIndex; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			cout << "Student " << studentID << "'s course days average: ";
			cout << (classRosterArray[i]->getNumDaysToCompleteCourse()[0] +
				classRosterArray[i]->getNumDaysToCompleteCourse()[1] +
				classRosterArray[i]->getNumDaysToCompleteCourse()[2]) / 3.0 << endl;
		}
	}
}

// Prints emails that either contain a ' ' char or do not contain an '@' char or '.' char
void Roster::printInvalidEmails() {

	cout << "The following email addresses are invalid:" << endl;

	for (int i = 0; i <= Roster::rosterArrayIndex; i++) {
		string currentEmail = Roster::getStudents()[i]->getStudentEmailAddress();
		if (currentEmail.find(' ') != string::npos || currentEmail.find('@') == string::npos || currentEmail.find('.') == string::npos) {
			cout << currentEmail << endl;
		}
	}
}

// Prints all students in a degree program by passing in a DegreeProgram enum
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	for (int i = 0; i <= Roster::rosterArrayIndex; i++) {
		if (Roster::classRosterArray[i]->getDegreeProgram() == degreeProgram) {
			classRosterArray[i]->print();
		}
	}
}
