//sting.cpp
#include "String.h"

String::String(char *str)
{
	p = str;
}

void String::display_1()
{
	cout << p;
}

String operator + (String &string1,String &string2)
{
	String string3;
	string3.len = string1.len + string2.len;
	string3.p = new char[string3.len + 1];
	strcpy(string3.p,string1.p);
	strcat(string3.p,string2.p);
	return string3;
}
