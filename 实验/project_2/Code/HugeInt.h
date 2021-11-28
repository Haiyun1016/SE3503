//hugeint.h
#ifndef HUGEINT_H
#define HUGEINT_H
#include <string.h>
#include <iostream>
using namespace std;

class HugeInt
{
	public:
		HugeInt(){real=0;imag=0;}
		HugeInt(double,double);
		friend HugeInt operator + (HugeInt &h1,HugeInt &h2);
		friend bool operator == (HugeInt &h3,HugeInt &h4);
		void display_2();
		void display_2_1();
	protected:
		double real;
		double imag;
};

#endif
