//Student.cpp
#include "Student.h"

Student::Student(int n,string nam,char s)
{
	num = n;
	name = nam;
	sex = s;
}

Student::~Student()
{
	cout << "析构函数调用。" << endl;
}

void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl << endl;
}
