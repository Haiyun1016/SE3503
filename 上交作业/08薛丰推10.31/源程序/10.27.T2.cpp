#include <iostream>
using namespace std;

class Student{
	public:
		Student(int id,int s):student_id(id),score(s){}
		int student_id;
		int score;
};
/*
void coutf(Student *p)
{
	int i=0;
	for(i=0;i<8;i++)
	{
		if(p[i].student_id%2==0)
		{
			cout<<p[i].student_id<<" "<<p[i].score<<endl;
		}
	}
}
*/
int main()
{   //Student *p;
	Student Stud[8] = {
		Student(1001,88),
		Student(1002,87),
		Student(1003,90),
		Student(1004,80),
		Student(1005,89),
		Student(1006,78),
		Student(1007,93),
		Student(1008,60)
	};
//	p = Stud;
//	coutf(p);
    cout << Stud[1].student_id << " " << Stud[1].score << endl;
    cout << Stud[3].student_id << " " << Stud[3].score << endl;
    cout << Stud[5].student_id << " " << Stud[5].score << endl;
    cout << Stud[7].student_id << " " << Stud[7].score << endl;
	return 0;
}
