#include <string>
#include <iostream>
using namespace std;

class Student
{
	public:
		Student(int n,string nam,char s)
		{
			num = n;
			name = nam;
			sex = s;
			cout << "Constructor called. " << endl;
		}
		~Student()
		{
			cout << "Destructor called. " << endl;
		}
		
		void dispalay()
		{
			cout << "num: " << num << endl;
			cout << "name: " << name << endl;
			cout << "sex: " << sex << endl << endl;
		}
	private:
		int num;
		string name;
		char sex;
};

int main()
{
	Student stud1(10010,"Wang_li",'f');
	stud1.dispalay();
	Student stud2(10011,"Zhang_fan",'m');
	stud2.dispalay();
	return 0;
}
