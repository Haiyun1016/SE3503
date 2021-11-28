//rational number.h
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H
#include <string.h>
#include <iostream>
using namespace std;

class Rational_Number
{
	public:
		Rational_Number(){real=0;imag=0;}
		Rational_Number(double,double);
		friend ostream& operator << (ostream&,Rational_Number&);

	protected:
		double real;
		double imag;
	protected:
};

#endif
