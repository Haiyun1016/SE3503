//Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
using namespace std;

class Student
{
	public:
		Student(int,string,char);
		~Student();
		void display();
	protected:
		int num;
		string name;
		char sex;
};

#endif
