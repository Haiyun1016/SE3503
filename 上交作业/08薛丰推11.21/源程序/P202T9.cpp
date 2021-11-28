#include <iostream>
#include <string>
using namespace std;

class Teacher{
	public:
		Teacher(string nam,int a,char s,string add,string t,string ti)
		{
			name = nam;
			age = a;
			sex = s;
			addr = add;
			tel = t;
			title = ti;
		}
		void display();
	protected:
		string name;    //���� 
		int age;        //���� 
		char sex;       //�Ա� 
		string addr;    //��ַ 
		string tel;     //�绰
		string title;   //ְ�� 		
};

void Teacher::display()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "sex:" << sex << endl;
	cout << "address:" << addr << endl;
	cout << "telephone:" << tel << endl;
	cout << "title:" << title << endl;
}


class Cadre{
	public:
		Cadre(string nam,int a,char s,string add,string t,string p)
		{
			name = nam;
			age = a;
			sex = s;
			addr = add;
			tel = t;
			post = p;
		}
	protected:
		string name;    //���� 
		int age;        //���� 
		char sex;       //�Ա� 
		string addr;    //��ַ 
		string tel;     //�绰
		string post;    //ְ�� 
};


class Teacher_Cadre : public Teacher,public Cadre{
	public:
		Teacher_Cadre(string nam,int a,char s,string add,string t,string ti,string p,float w):
			Teacher(nam,a,s,add,t,ti),Cadre(nam,a,s,add,t,p),wages(w){}
		void show();
	private:
		float wages;    //���� 
};

void Teacher_Cadre::show()
{
	Teacher::display();
	cout << "post:" << Cadre::post << endl;
	cout << "wages:" << wages << endl;
}


int main()
{
	Teacher_Cadre tc1("Zhangsan",21,'m',"Zhengzhou","1234567890","Senior_teacher","Headmaster",23000);
	tc1.show();	
	return 0;
}
