#include <iostream>
using namespace std;

int f(int x,int y,int z)
{
	int m;
	if (x < y) m = x;
	 else m = y;
	if (z < m) m = z;
	return (m);
}

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	c = f(a,b,c);
	cout << c << endl;
	return 0;
}
