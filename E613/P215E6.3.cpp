#include <iostream>
using namespace std;

class Point{
	public:
		Point(){}
		~Point(){cout << "executing Point destructor" << endl;}
};

class Circle:public Point{
	public:
		Circle(){}
		~Circle(){cout << "executing Circle destructor" << endl;}
	private:
		int radus;
};

int main()
{
	Point *p = new Circle;  //��new���ٶ�̬�洢�ռ�
	delete p;               //��delete�ͷŶ�̬�洢�ռ�
	return 0; 
}
