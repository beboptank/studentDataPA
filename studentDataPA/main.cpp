#include <iostream>
#include "student.h"
using namespace std;

int main() {

	const string studentData[] =

	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Seth,Christmus,schr297@wgu.edu,31,40,23,32,SOFTWARE" };

	Student student_test;

	string id_num = student_test.getStudentID();

	student_test.print();

	int array[3] = { 1, 2, 3 };

	Student timmy("A9", "Timmy", "Baker", "timmybaker@wgu.edu", 21, array, DegreeProgram::SOFTWARE);

	timmy.print();

	return 0;
}