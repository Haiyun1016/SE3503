#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		void get_value();
		void display();	
	protected:
		int num;
		string name;
		char sex;		
};

void Student::get_value()
{cin >> num >> name >> sex;}

void Student::display()
{
	cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

class Student1:public Student
{
	public:
		void get_value1();
		void display1();
	private:
		int age;
		string addr;
};

void Student1::get_value1()
{
	get_value();
    cin >> age >> addr;
}

void Student1::display1()
{
	cout << "num: " << num << endl;
  	cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
    cout << "age: " << age << endl;
	cout << "address: " << addr << endl;			
}

int main()
{
	Student1 stud1;
	stud1.get_value1();
	stud1.display1();
	return 0;
}
