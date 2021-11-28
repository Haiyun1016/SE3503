#include <iostream>
using namespace std;

void max(int &x,int &y,int &z)
{
	int temp;
	if (x > y){temp = x;x = y;y = temp;}
	if (x > z){temp = x;x = z;z = temp;}
	if (y > z){temp = y;y = z;z = temp;}
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	max(x,y,z);
	cout << x << ',' << y << ',' << z <<endl;
	return 0;
} 	
