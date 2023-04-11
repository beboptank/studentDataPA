#include <iostream>
#include "student.h"
using namespace std;

int main() {

	Student student_test;

	int id_num = student_test.GetStudentID();

	student_test.Print();

	int array[3] = { 1, 2, 3 };

	Student timmy(1, "Timmy", "Baker", "timmybaker@wgu.edu", 21, array, DegreeProgram::SOFTWARE);

	timmy.Print();

	return 0;
}