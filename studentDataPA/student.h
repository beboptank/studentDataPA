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
		string GetStudentID();

		string GetFirstName();

		string GetLastName();

		string GetEmail();

		int GetAge();

		int GetNumDaysToFinishCourse();

		DegreeProgram GetDegreeProgram();

		// Setters
		void SetStudentID(string id);

		void SetFirstName(string nameString);

		void SetLastName(string nameString);

		void SetEmail(string emailString);

		void SetAge(int ageInt);

		void SetNumDaysToFinishCourse(int array[3]);

		void SetDegreeProgram(DegreeProgram degreeProgram);

		// Print

		void Print();
	
	private:
		string studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		int numDaysToFinishCourse[3];
		DegreeProgram degree;

	Student(string id, string first, string last, string emailAddress, int studentAge, int numDaysToFinishCourseArray[3], DegreeProgram degreeProgram) {
		studentID = id;
		firstName = first;
		lastName = last;
		email = emailAddress;
		age = studentAge;
		numDaysToFinishCourse[3] = numDaysToFinishCourseArray[3];
		degree = degreeProgram;
	}

};

#endif