#include <iostream>
#include "roster.h"
using namespace std;

int main() {

	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "Lanugage used: C++" << endl;
	cout << "WGU Student ID: 005522686" << endl;
	cout << "Name: Seth Christmus" << endl;

	const int numStudents = 5;

	Roster classRoster;

	classRoster.printAll();
	classRoster.printInvalidEmails();

	


	/*Student student_test;

	string id_num = student_test.getStudentID();

	student_test.print();

	int array[3] = { 1, 2, 3 };

	Student timmy("A9", "Timmy", "Baker", "timmybaker@wgu.edu", 21, array, DegreeProgram::SOFTWARE);

	timmy.print();*/

	return 0;
}