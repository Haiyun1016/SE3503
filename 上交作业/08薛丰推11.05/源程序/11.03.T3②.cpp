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
	cout << "��������Ϊ��" << i1 << endl;
	cout << "��С������Ϊ��" << i2 << endl;
	cout << "���ĸ�����Ϊ��" << f1 << endl;
	cout << "��С�ĸ�����Ϊ��" << f2 << endl;
	return 0;
}
