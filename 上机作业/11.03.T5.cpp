#include <iostream>
using namespace std;

class Student{
	public:
		Student(int n,float s):num(n),score(s){}
		void total();
		static float average();
	private:
		int num;
		float score;
		static float sum;
		static int count;
};

void Student::total()
{
	sum = sum + score;
	count++;
}

float Student::average()
{
	return (sum/count);
}

float Student::sum = 0;
int Student::count = 0;

int main()
{
	Student stu[5] = {
	Student(1001,98),
	Student(1002,97),
	Student(1003,96),
	Student(1004,95),
	Student(1005,94)
	};
	for (int i=0;i<5;i++)
	  stu[i].total();
	cout << "5名学生平均成绩为：" << Student::average() << endl;
	return 0;
}
