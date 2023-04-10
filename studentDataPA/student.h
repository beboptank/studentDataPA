#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include <iostream>
#include <string>
#include "../studentDataPA/degree.h"
#include "student.cpp"
using namespace std;

class Student {

	public:
		// Getters
		int GetStudentID();

		string GetFirstName();

		string GetLastName();

		string GetEmail();

		int GetAge();

		int GetNumDaysToFinishCourse();

		DegreeProgram GetDegreeProgram();

		// Setters
		void SetStudentID(int id);

		void SetFirstName(string nameString);

		void SetLastName(string nameString);

		void SetEmail(string emailString);

		void SetAge(int ageInt);

		void SetNumDaysToFinishCourse(int array[3]);

		void SetDegreeProgram(DegreeProgram degreeProgram);

		// Print

		void Print();
	
	private:
		int studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		int numDaysToFinishCourse[3];
		DegreeProgram degree;

		Student(int id, string first, string last, string emailAddress, int studentAge, int numDaysToFinishCourseArray[3], DegreeProgram degreeProgram);

		Student();

};

#endif