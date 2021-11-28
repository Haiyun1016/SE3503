#include <iostream>
using namespace std;
template <class numtype>

class Compare{
	public:
		Compare(numtype a,numtype b)
		{
			x = a;
			y = b;
		}
		numtype max()
		{
			return (x>y)?x:y;
		}
		numtype min()
		{
			return (x<y)?x:y;
		}
	private:
		numtype x,y;
};

int main()
{
	Compare <int> cmp1(3,7);
	cout << "��������Ϊ��" << cmp1.max() << endl;
	cout << "��С������Ϊ��" << cmp1.min() << endl;
	Compare <float> cmp2(45.78,93.6);
	cout << "���ĸ�����Ϊ��" << cmp2.max() << endl;
	cout << "��С�ĸ�����Ϊ��" << cmp2.min() << endl;
	return 0;
}
