//hugeint.cpp
#include "HugeInt.h"

HugeInt::HugeInt(double r,double i)
{
	real = r;
	imag = i;
}

HugeInt operator + (HugeInt &h1,HugeInt &h2)
{
	return HugeInt(h1.real+h2.real,h1.imag+h2.imag);
}

void HugeInt::display_2()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}

void HugeInt::display_2_1()
{
	cout << "h4=h5=" << "(" << real << "," << imag << "i)" << endl;
}

bool operator == (HugeInt &h1,HugeInt &h2)
{
	if(h1.real == h2.real && h1.imag == h2.imag)
	  return true;
	else return false;
}
