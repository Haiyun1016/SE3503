//main.cpp
#include "String.h"
#include "HugeInt.h"
#include "Rational Number.h"

int main()
{
	String string1("Hello"),string2("World"),string3;
	cout << "a.重载 string 类的“+”运算符以实现字符串的连接\n" << endl;
	cout << "重载前:" << endl;
	string1.display_1();
	cout << endl;
	string2.display_1();
	cout << "\n\n重载后：" << endl;
	string3 = string1 + string2;
	string3.display_1();
	
	cout << "\n\nb.重载 HugeInt类的算术运算符和比较运算符\n" << endl;
	HugeInt h1(2,3),h2(4,5),h3;
	h3 = h1 + h2;
	cout << "h1=";
	h1.display_2();
	cout << "h2=";
	h2.display_2();
	cout << "h1+h2=";
	h3.display_2();
	
	HugeInt h4(2,3),h5(2,3);
	cout << "h4=";
	h4.display_2();
	cout << "h5=";
	h5.display_2();
	if (h4 == h5)
	{
		h4.display_2_1();
	}
	else
	{
		cout << "h4!=h5" << endl;
	} 

	
	cout << "\n\nc.重载 Rational Number 类的流插入运算符\n" << endl;
	Rational_Number r(7,8);
	cout << r;
	return 0;
}
