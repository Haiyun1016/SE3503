#include <iostream>
using namespace std;

class Volume    //��� 
{
	public:
		inline void cin_f();      //���뺯�� 
		inline float count_f();   //���㺯�� 
		inline void cout_f();     //������� 
	private:
		float volume;    //��� 
		float length;   //�� 
		float width;    //�� 
		float height;   //�� 
};

Volume v1,v2,v3;

inline void Volume::cin_f()
{
	cout << "���������볤������:";
	cin >> length >> width >> height; 
}

inline float Volume::count_f()
{
	volume = length * width * height;
	return volume;
}

inline void Volume::cout_f()
{
	cout << "�ó���������Ϊ��" << volume << endl; 
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
