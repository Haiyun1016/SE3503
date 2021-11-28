#include <iostream>
using namespace std;

void max(int &x,int &y)
{
	int temp;
	if (y > x) {temp = x;x = y;y = temp;}
    cout << x << ',' << y <<endl;
}

int main()
{
	int x,y;
	cin >> x >> y;
	max(x,y);
	return 0;
} 	
