#include <iostream>
using namespace std;

class Student{
	public:
		Student(int id,int s):student_id(id),score(s){}
		int student_id;
		int score;
};

void max(Student *p)
{
	int score_max = p[0].score;
	int i,k=0;
	for(i=1;i<5;i++)
	{
		if(p[i].score > score_max)
		{
			score_max = p[i].score;
			k = i;
		}
	}
	cout << p[k].student_id << " " << score_max << endl;
}

int main()
{
	Student *p;
	Student Stud[5] = {
		Student(1001,88),
		Student(1002,87),
		Student(1003,90),
		Student(1004,80),
		Student(1005,89)
	};
	p = Stud;
	max(p);
	return 0;
}
