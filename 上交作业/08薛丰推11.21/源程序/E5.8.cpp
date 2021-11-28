#include <iostream>
#include <string>
using namespace std; 

class Teacher
{	public:
		Teacher(string nam,int a,string t)
		{
			name = nam;
			age = a;
			title = t;
		} 
		void display()
		{
			cout <<"name:"<<name <<endl; 
			cout <<"age"<<age<<endl;
			cout <<"title:"<<title<<endl;
		}
	protected:
		string name; 
		int age;
		string title;
};

class Student
{
	public:
		Student(string nam,char s,float sco)
		{ 
		    name = nam;
			sex = s;
			score = sco;
		}
		void display()
		{
			cout << "name:" <<name <<endl; 
			cout << "sex:"<<sex<<endl;
			cout << "score:" <<score <<endl;
		}
	protected:
		string name;
		char sex;
		float score;
};

class Graduate:public Teacher,public Student
{
	public:
		Graduate(string nam,int a,char s,string t,float sco,float w):
			Teacher(nam,a,t),Student(nam,s,sco),wage(w){}
		void show()
		{
			Teacher::display();
			cout <<"sex:"<< sex <<endl;
			cout <<"score:"<< Student::score << endl;  
			cout <<"wages:"<< wage << endl;
		}
	private:
		float wage;
};

int main()
{
	Graduate grad1("Wang_1i",24,'f',"assistant",89.5,2400);
	grad1.show(); 
	return 0;
}
