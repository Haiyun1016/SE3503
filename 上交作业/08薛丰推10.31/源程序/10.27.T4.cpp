#include <iostream>
using namespace std;
template <class numtype>

class Compare{
	public:
		Compare(numtype a,numtype b)
		{x = a;y = b;}
		numtype max()
		{return(x>y)?x:y;}
		numtype min()
		{return(x<y)?x:y;}
	private:
		numtype x,y;
};

int main()
{
	Compare <int> cmp1(2,8);
	cout << "����������������Ϊ��" << cmp1.max() << endl;
	cout << "������������С����Ϊ��" << cmp1.min() << endl << endl;
	
	Compare <float> cmp2(63.2,43.7);
	cout << "������������������Ϊ��" << cmp2.max() << endl;
	cout << "��������������С����Ϊ��" << cmp2.min() << endl << endl;
	
	Compare <char> cmp3('c','T');
	cout << "�����ַ�������Ϊ��" << cmp3.max() << endl;
	cout << "�����ַ�����С��Ϊ��" << cmp3.min() << endl;
	return 0;
}
