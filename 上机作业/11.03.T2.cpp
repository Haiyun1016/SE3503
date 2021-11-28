#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		Student(int n,int s,string nam)
		{
			num = n;
			score = s;
			name = nam;
		} 
		int num;
		int score;
		string name;
};

void score_min(Student *p)
{
	int scoremin = p[0].score;
	int i,k=0;
	for (i=1;i<7;i++)
	{
		if (p[i].score < scoremin)
		{
			scoremin = p[i].score;
			k = i;
		}
	}
	cout << p[k].num << " " << scoremin << " " << p[k].name << endl;
}

int main()
{
	Student *p;
	Student stu[7] = {
	Student(1001,98,"Liyi"),
	Student(1002,97,"Lier"),
	Student(1003,96,"Lisan"),
	Student(1004,95,"Lisi"),
	Student(1005,94,"Liwu"),
	Student(1006,93,"Liliu"),
	Student(1007,92,"Liqi")
	};
	p = stu;
	score_min(p);
	return 0;
}
