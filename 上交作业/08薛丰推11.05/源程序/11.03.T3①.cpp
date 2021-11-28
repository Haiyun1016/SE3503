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
	cout << "最大的整数为：" << cmp1.max() << endl;
	cout << "最小的整数为：" << cmp1.min() << endl;
	Compare <float> cmp2(45.78,93.6);
	cout << "最大的浮点数为：" << cmp2.max() << endl;
	cout << "最小的浮点数为：" << cmp2.min() << endl;
	return 0;
}
