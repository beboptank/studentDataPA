#include <iostream>
#include "student.h"
using namespace std;

int main() {

	Student student_test;

	int id_num = student_test.GetStudentID();

	student_test.Print();

	Student timmy(1, "Timmy");

	timmy.Print();

	return 0;
}