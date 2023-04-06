#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include <iostream>
#include <string>
#include "../studentDataPA/degree.h"
#include "student.cpp"
using namespace std;


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

void print();

#endif