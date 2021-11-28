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
	cout << "两个整数中最大的数为：" << cmp1.max() << endl;
	cout << "两个整数中最小的数为：" << cmp1.min() << endl << endl;
	
	Compare <float> cmp2(63.2,43.7);
	cout << "两个浮点数中最大的数为：" << cmp2.max() << endl;
	cout << "两个浮点数中最小的数为：" << cmp2.min() << endl << endl;
	
	Compare <char> cmp3('c','T');
	cout << "两个字符中最大的为：" << cmp3.max() << endl;
	cout << "两个字符中最小的为：" << cmp3.min() << endl;
	return 0;
}
