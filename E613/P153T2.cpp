#include <iostream>
using namespace std;

class Complex{
	public:
		Complex(){real = 0;imag = 0;}
		Complex(double r,double i){real = r;imag = i;}
        Complex operator + (Complex &c2);
        Complex operator - (Complex &c2);
        Complex operator * (Complex &c2);
        Complex operator / (Complex &c2);
		void display();
	private:
		double real;
		double imag;
};

Complex Complex::operator + (Complex &c2)
{
	Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;
}

Complex Complex::operator - (Complex &c2)
{
	Complex c;
	c.real = real - c2.real;
	c.imag = imag - c2.imag;
	return c;
}

Complex Complex::operator * (Complex &c2)
{
	Complex c;     //(a+bi)*(c+di)==ac+adi+bc+bdi -> == (a+b)c + (a+b)d i
	c.real = c2.real * (real + imag);
	c.imag = c2.imag * (real + imag);
	return c;
}

Complex Complex::operator / (Complex &c2)
{
	Complex c;                   
	c.real = (real * c2.real + imag * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);    
	c.imag = (imag * c2.real - real * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);    
	return c;
	//(a+bi)/(c+di) == (a+bi)(c-di)/(c+di)(c-di) 
	//== ac-adi+bci+bd / cc + dd
	//== ac+bd + (bc-ad)i / cc + dd
	//== (ac+bd)/(cc+dd) + (bc-ad)/(cc+dd) i
}


void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}

int main()
{
	Complex c1(6,4),c2(2,-6),c3;
	c3 = c1 + c2;
	cout << "c3=";
	c3.display();
	c3 = c1 - c2;
	cout << "c3=";
	c3.display();
	c3 = c1 * c2;
	cout << "c3=";
	c3.display();
	c3 = c1 / c2;
	cout << "c3=";
	c3.display();
	return 0;
}
