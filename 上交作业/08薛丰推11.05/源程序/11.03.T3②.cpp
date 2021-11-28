#include <iostream>
using namespace std;
template <typename T>

void max(T &a,T &b)
{
	T c;
	if (a < b)
	{
		c = a; a = b; b = c;
	}
}

int main()
{
	int i1=8,i2=5;
	int imax,imin;
	float f1=56.9,f2=90.7;
	float fmax,fmin;
	max(i1,i2);
	max(f1,f2);
	cout << "最大的整数为：" << i1 << endl;
	cout << "最小的整数为：" << i2 << endl;
	cout << "最大的浮点数为：" << f1 << endl;
	cout << "最小的浮点数为：" << f2 << endl;
	return 0;
}
