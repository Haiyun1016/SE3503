#include <iostream>
#include <string>
using namespace std;

class Teacher{
	public:
		Teacher(int n,string nam,char s)
		{
			num = n;
			name = nam;
			sex = s;
		}
		void display()
		{
			cout << "num:" << num << endl;
			cout << "name:" << name << endl;
			cout << "sex:" << sex << endl;
		}
	private:
		int num;
		string name;
		char sex;
};

class BirthDate{
	public:
		BirthDate(int y,int m,int d)
		{
			year = y;
			month = m;
			day = d;
		}
		void display()
		{
			cout << "birthday:" << month << "/" << day << "/" << year << endl;
		}
		void change(int y,int m,int d)
		{
			year = y;
			month = m;
			day = d;
		}
	private:
		int year;
		int month;
		int day;
};

class Professor:public Teacher
{
	public:
		Professor(int n,string nam,char s,int y,int m,int d):
			Teacher(n,nam,s),birthday(y,m,d){}
		void display()
		{
			Teacher::display();
			birthday.display();
		}
		void change(int y,int m,int d)
		{
			birthday.change(y,m,d);
		}
	private:
		BirthDate birthday;    //������һ��BirthDate��Ķ���birthday 
};

int main()
{
	Professor prof1(1001,"Zhangsan",'m',2021,11,20);
	cout << "�޸�ǰ������Ϊ��" << endl;
	prof1.display();
	cout << endl << "�޸ĺ������Ϊ��" << endl;
	prof1.change(1973,9,10);
	prof1.display();
	return 0;
}

