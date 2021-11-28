//string.h
#ifndef STRING_H
#define STRING_H
#include <string.h>
#include <iostream>
using namespace std;

class String
{
	public:
		String(){p = NULL;}
		String(char *str);
		friend String operator + (String &string1,String &string2);
		
		void display_1();
	protected:
		char *p;
		int len;
};

#endif
