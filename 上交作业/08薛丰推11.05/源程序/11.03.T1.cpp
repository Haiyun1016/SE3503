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

int main()
{
	Student stu[5] = {
	Student(1001,98,"Zhangsan"),
	Student(1002,97,"Lisi"),
	Student(1003,96,"Wangwu"),
	Student(1004,95,"Wanger"),
	Student(1005,94,"Zhaoliu")
	};
	for (int i=0;i<5;i++)
	{
		if (stu[i].num % 2 == 1)
		  cout << stu[i].num << " " << stu[i].score << " " << stu[i].name << " " << endl;
	}
	return 0;
}
