#include <iostream>
using namespace std;

class Student{
	public:
		Student(int id,int s):student_id(id),score(s){}
		void print_student();
	private:
		int score;
		int student_id;
};

void Student::print_student()
{
	cout << student_id << " " << score << endl;
}

int main()
{
	Student *ps;
    Student Stud[5] = {
    	Student(1001,90),
    	Student(1002,89),
    	Student(1003,88),
    	Student(1004,87),
    	Student(1005,86)
	};
    ps = Stud;
    ps[0].print_student();  
    ps[2].print_student();
    ps[4].print_student();
}
