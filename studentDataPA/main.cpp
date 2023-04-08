#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
#include "degree.h"
using namespace std;

void main() {
	string id = "1";
	string first = "Jeff";
	string last = "Bright";
	string email = "jeff@email.com";
	int age = 31;
	int days[3] = { 50, 24, 38 };
	DegreeProgram degree = SOFTWARE;

	Student jeff(id, first, last, email, age, days[3], degree);
}