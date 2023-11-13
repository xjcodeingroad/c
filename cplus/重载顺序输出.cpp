#include<iostream>
using namespace std;
void sort(int &a,int &b, int &c)
{
	int i;
	if(a>b) 
	{
		i = a;
		a = b;
		b = i;
	}
	if(a>c)
	{
		i = a;
		a = c;
		c = i;
	}
	if(b>c)
	{
		i = b;
		b = c;
		c = i;
	}
	
}
void sort(double &a,double &b,double &c)
{
	double i;
	if(a>b) 
	{
		i = a;
		a = b;
		b = i;
	}
	if(a>c)
	{
		i = a;
		a = c;
		c = i;
	}
	if(b>c)
	{
		i = b;
		b = c;
		c = i;
	}
	
}
void sort(char &a,char &b,char &c)
{
	char i;
	if(a>b) 
	{
		i = a;
		a = b;
		b = i;
	}
	if(a>c)
	{
		i = a;
		a = c;
		c = i;
	}
	if(b>c)
	{
		i = b;
		b = c;
		c = i;
	}
	
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort(a,b,c);
	cout<<a<<","<<b<<","<<c<<endl;
	double e,f,g;
	cin>>e>>f>>g;
	sort(e,f,g);
	cout<<e<<","<<f<<","<<g<<endl;
	char h,i,j;
	cin>>h>>i>>j;
	sort(h,i,j);
	cout<<h<<","<<i<<","<<j<<endl;
	return 0;
}
	

