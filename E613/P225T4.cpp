#include <iostream>
using namespace std;

class Shape{
	public:
		virtual double area() const =0;  //´¿Ðéº¯Êý 
};

class Circle:public Shape{
	public:
		Circle(double r):radius(r){}
		virtual double area() const {return 3.14159 * radius * radius;};
	protected:
		double radius;
};

class Rectangle:public Shape{
	public:
		Rectangle(double w,double h):width(w),height(h){}
		virtual double area() const {return width * height;}
	protected:
		double width,height;
};

class Triangle:public Shape{
	public:
		Triangle(double w,double h):width(w),height(h){}
		virtual double area() const {return 0.5*width*height;}
	protected:
		double width,height;
};

void printArea(const Shape &s)
{
	cout << s.area() << endl;
}

int main()
{
	Circle circle(5.3);
	cout << "area of circle = ";
	printArea(circle);
	Rectangle rectangle(2.8,5.3);
	cout << "area of rectangle = ";
	printArea(rectangle);
	Triangle triangle(2.8,5.3);
	cout << "area of triangle = ";
	printArea(triangle);
	return 0;
}
