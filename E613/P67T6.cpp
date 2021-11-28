#include <iostream>
using namespace std;

class Volume    //体积 
{
	public:
		inline void cin_f();      //输入函数 
		inline float count_f();   //计算函数 
		inline void cout_f();     //输出函数 
	private:
		float volume;    //体积 
		float length;   //长 
		float width;    //宽 
		float height;   //高 
};

Volume v1,v2,v3;

inline void Volume::cin_f()
{
	cout << "请依次输入长、宽、高:";
	cin >> length >> width >> height; 
}

inline float Volume::count_f()
{
	volume = length * width * height;
	return volume;
}

inline void Volume::cout_f()
{
	cout << "该长方体的体积为：" << volume << endl; 
}

int main()
{
	v1.cin_f();
	v2.cin_f();
	v3.cin_f();
	v1.count_f();
	v2.count_f();
	v3.count_f();
	v1.cout_f();
	v2.cout_f();
	v3.cout_f();
	return 0;
}
