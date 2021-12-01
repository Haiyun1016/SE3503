#include <iostream>
using namespace std;

class Point{
	public:
		Point(float a,float b):x(a),y(b){}
		virtual~Point(){cout << "executing Point destructor" << endl;}
	private:
		float x;
		float y;
};

class Circle:public Point{
	public:
		Circle(float a,float b,float r):Point(a,b),radius(r){}
		virtual~Circle(){cout << "executing Circle destructor" << endl;}
	private:
		float radius;
};

int main()
{
	Point *p = new Circle(2.5,1.8,4.5);  //用new开辟动态存储空间
	delete p;               //用delete释放动态存储空间
	return 0; 
}
