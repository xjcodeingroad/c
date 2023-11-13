#include<iostream>
#include<cstring>
using namespace std;
class account
{
	private:
		char* accountNumber;
		char* name;
		char* password;
		int balance;
		double rate;
	public:
		account(const char*,const char*,const char*,int,double);
		void saveMoney(int);
		void drawMoney(int);
		void getInterest();	
		void showBase();	
};

account::account(const char* num,const char* n,const char* p,int b,double r)
{
	accountNumber = new char[strlen(num)+1];
	strcpy(accountNumber,num);
	name = new char[strlen(n)+1];
	strcpy(name,n);
	password = new char[strlen(p)+1];
	strcpy(password,p);
	balance = b;
	rate = r;
}
void account::saveMoney(int a)
{
	balance +=a;
}
void account::drawMoney(int a)
{
	balance-=a;
}
void account::getInterest()
{
	double interest;
	interest = balance*rate;
	cout<<"interest:"<<interest<<endl;
}
void account::showBase()
{
	cout<<"accountNumber:"<<accountNumber<<"name:"<<name<<"balance:"<<balance<<endl;
}
int main()
{
	account a("qwq12131","zhangsan","123123asda",12222,0.003);
	cout<<"´æÇ®"<<endl; 
	a.saveMoney(10000);
	a.showBase();
	cout<<"È¡Ç®"<<endl;
	a.drawMoney(5000);
	a.showBase();
	cout<<"ÀûÏ¢"<<endl;
	a.getInterest();
	return 0;
}
