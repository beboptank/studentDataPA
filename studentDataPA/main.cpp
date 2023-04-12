#include <iostream>
#include "roster.h"
using namespace std;

int main() {

	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "Lanugage used: C++" << endl;
	cout << "WGU Student ID: 005522686" << endl;
	cout << "Name: Seth Christmus" << endl;
	cout << endl;

	const int numStudents = 5;
	DegreeProgram SOFTWARE = DegreeProgram::SOFTWARE;
	Roster classRoster;
	cout << endl;

	cout << "Displaying all students: " << endl;
	classRoster.printAll();
	cout << endl;

	cout << "Displaying invalid emails: " << endl;
	classRoster.printInvalidEmails();
	cout << endl;

	cout << "Displaying each student's average days to complete each course: " << endl;
	for (int i = 0; i < numStudents; i++) {
		classRoster.printAverageDaysInCourse(classRoster.getStudents()[i]->getStudentID());
	}
	cout << endl;

	cout << "Displaying students in the SOFTWARE degree program: " << endl;
	classRoster.printByDegreeProgram(SOFTWARE);
	cout << endl;

	cout << "Removing student A3 from the roster: " << endl;
	classRoster.remove("A3");
	cout << endl;
	cout << "Updated roster: " << endl;
	classRoster.printAll();
	cout << endl;
	classRoster.remove("A3");
	cout << endl;
	
	cout << "Program complete. Calling destructors: " << endl;

	return 0;
}