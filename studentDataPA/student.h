#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
	int id;

public:
	Student();

	Student(int id);

	void SetStudentID(int id);

	int GetStudentID();

	void Print();
};

#endif