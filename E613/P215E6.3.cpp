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
	Point *p = new Circle;  //用new开辟动态存储空间
	delete p;               //用delete释放动态存储空间
	return 0; 
}
