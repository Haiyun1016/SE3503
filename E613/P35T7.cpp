#include <iostream>
using namespace std;

int max(int x,int y,int z=0)
{
	if (y > x)
	 x = y;
	if (z > x)
	 x = z;
	return x;
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	cout << "两个数中最大的为" << max(x,y) <<endl;
	cout << "三个数中最大的为" << max(x,y,z) <<endl; 
	return 0;
} 	
