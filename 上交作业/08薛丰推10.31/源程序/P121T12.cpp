#include<iostream>
using namespace std;
template<class numtype>
class compare
{
	public:
		compare(numtype a,numtype b);
		numtype max();
		numtype min();
	private:
		numtype x,y;
};
template<class numtype>
compare<numtype>::compare(numtype a,numtype b)
{
	x=a;
	y=b;
}
template<class numtype>
numtype compare<numtype>::max()
{
	return(x>y)?x:y;}
template<class numtype>
numtype compare<numtype>::min()
{
	return(x<y)?x:y;}
int main()
{
	compare<int>cmp1(3,7);
	cout<<cmp1.max()<<"是两个整数中最大的数."<<endl;
	cout<<cmp1.min()<<"是两个整数中最小的数."<<endl;
	compare<float>cmp2(45.78,93.6);
	cout<<cmp2.max()<<"是两个浮点数中最大的数."<<endl;
	cout<<cmp2.min()<<"是两个浮点数中最小的数."<<endl;
	compare<char>cmp3('a','A');
	cout<<cmp3.max()<<"是两个字符型中最大的数."<<endl;
	cout<<cmp3.min()<<"是两个字符型中最小的数."<<endl;
	return 0;
}