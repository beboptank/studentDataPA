#include <iostream>
#include "student.h"
using namespace std;

int main() {

	Student student_test;

	int id_num = student_test.GetStudentID();

	student_test.Print();

	return 0;
}