//rational number.cpp
#include "Rational Number.h"

Rational_Number::Rational_Number(double r,double i)
{
	real = r;
	imag = i;
}

ostream & operator << (ostream & output,Rational_Number& r)
{
	output << "(" << r.real << "+" << r.imag << "i)" << endl;
	return output;
}
