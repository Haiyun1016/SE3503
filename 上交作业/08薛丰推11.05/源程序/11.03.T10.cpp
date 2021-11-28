#include <iostream>
using namespace std;

void max(int &a,int &b,int &c)
{
	int temp;
	if (a<b)
	{temp=a;a=b;b=temp;}
	if (a<c)
	{temp=a;a=c;c=temp;}
	if (b<c)
	{temp=b;b=c;c=temp;}
}

int main()
{
	int i=3,j=5,k=2;
	max(i,j,k);
	cout << "½µÐòÎª£º" << i << " " << j << " " << k << endl;
	return 0;
}
