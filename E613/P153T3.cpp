#include <iostream>
using namespace std;

class Complex{
	public:
		Complex(){real = 0;imag = 0;}
		Complex(double r,double i){real = r;imag = i;}
        Complex operator + (Complex &c2);
        Complex operator + (int &i);
        friend Complex operator + (int &,Complex &);
        void display();
	private:
		double real;
		double imag;
};

Complex Complex::operator + (Complex &c)  //Á½¸ö¸´Êý 
{
	return Complex(real + c.real,imag + c.imag);
}

Complex Complex::operator + (int &i)  //i+c
{
	return Complex(real+i,imag);
}

Complex operator + (int &i,Complex &c) //c+i
{
	return Complex(i+c.real,c.imag);
}

void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}

int main()
{
	int i = 3;
	Complex c1(6,4),c2(2,-6),c3;
	c3 = c1 + c2;
	cout << "c1+c2=";
	c3.display();
	c3 = i + c1;
	cout << "i+c1=";
	c3.display();
	c3 = c1 + i;
	cout << "c1+i=";
	c3.display();
	return 0;
}
