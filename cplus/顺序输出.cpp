#include<iostream>
using namespace std;
void sort(int &a,int &b,int &c);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort(a,b,c);
	cout<<"sort:"<<a<<","<<b<<","<<c<<endl;
	return 0;
	
}
void sort(int &a,int &b,int &c)
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
