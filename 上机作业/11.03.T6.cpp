#include <iostream>
using namespace std;

class Box{
	public:
		Box(int,int);
		int volume();
		static int height;
		int width;
		int length;
};

Box::Box(int w,int len)
{
	width = w;
	length = len;
}

int Box::volume()
{
	return (height * width * length);
}

int Box::height = 10;

int main()
{
	Box a(3,4),b(5,6);
	cout << a.height << endl;
	cout << b.height << endl;
	cout << Box::height << endl;
	cout << a.volume() << endl;
	return 0;
}
