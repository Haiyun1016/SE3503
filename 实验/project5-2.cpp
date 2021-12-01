#include <iostream>
using namespace std;
template <class T>

class Compare
{
	public:
		Compare(T a,T b)
		{
			x = a;
			y = b;
		}
		T max()
		{return (x>y)?x:y;}
		T min()
		{return (x<y)?x:y;}
	private:
		T x,y;
};

int main()
{
	Compare <int> cmp1(3,7);
	cout << cmp1.max() << "是两个整数中最大的数。" << endl;
	cout << cmp1.min() << "是两个整数中最小的数。" << endl;
	Compare <float> cmp2(45.78,93.6);
	cout << cmp2.max() << "是两个浮点数中最大的数。" << endl;
	cout << cmp2.min() << "是两个浮点数中最小的数。" << endl;
	return 0; 
}

