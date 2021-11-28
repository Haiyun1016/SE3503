#include <iostream>
using namespace std;
template <typename T>
 
void sort(T a[])
{
	int i,j;
	T t;
	for (j=0;j<4;j++)         //冒泡排序 
	  for (i=0;i<4-j;i++)
	    if (a[i]>a[i+1])
	    {
	    	t = a[i];
	    	a[i] = a[i+1];
	    	a[i+1] = t;
		}
	cout << "排序后的数组为：" <<endl;
	for (i=0;i<5;i++)
	  cout << a[i] << "  ";
	cout << endl << endl;
}

int main()
{
	int int_array[5] = {5,7,-3,1,0};
	float float_array[5] = {-3.6,5.7,10.9,-3.9,4.2};
	sort(int_array);
	sort(float_array);	
	return 0;
}
