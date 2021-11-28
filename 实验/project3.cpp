#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

class Account
{
	public:
		Account(int,string);
		void display_1();
		
	protected:
		int account;   //账号 
		string name;   //姓名 
		 
		 
};
Account::Account(int acc,string nam)
{
	account = acc;
	name = nam;
}

void Account::display_1()
{
	cout << setw(6) << setfill('0') << account << "\t\t" << name;  
}

class SavingsAccount : public Account
{
	public:
		SavingsAccount(int acc,string nam,float bal):Account(acc,nam)
		{
			balance = bal;
		}
		void display_2();
	protected:
		float balance;
};

void SavingsAccount::display_2()
{
	display_1();
	cout << "\t" << balance << endl;
}

class CheckAccount : public Account
{
	public:
		CheckAccount(int acc,string nam,int i):Account(acc,nam)
		{
			id = i;
		}
		void display_3();
	protected:
		int id;
};

void CheckAccount::display_3()
{	
	display_1();
	cout << "\t" << id << endl;	
}

int main()
{
	cout <<"Account：\n";
	Account ac1(1231,"Zhangsan");
	cout << "账号\t\t" << "姓名\n" << endl;
	ac1.display_1();
	cout << "\n";
	
	cout << "\n" << "SavingsAccount：\n";
	SavingsAccount sa1(1231,"Zhangsan",1829.23);
	cout << "账号\t\t" << "姓名\t\t" << "余额\n" << endl;
	sa1.display_2();
	
	cout << "\n" << "CheckAccount：\n"; 
	CheckAccount ch1(1231,"Zhangsan",123456);
	cout << "账号\t\t" << "姓名\t\t" << "身份证号码\n" << endl;
	ch1.display_3();
	
	int id;        //身份证号码
	return 0;
}
