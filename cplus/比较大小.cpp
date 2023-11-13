#include<iostream>
using namespace std;
int max(int a,int b,int c=0);
int main()
{
	int a,b,c,d;
	cin>>a>>b;
	c = max(a,b);
	cout<<"max is:"<<c<<endl;
	d = max(a,b,c);
	cout<<"max is:"<<d;
	return 0;
} 
int max(int a,int b,int c)
{
	int max=a;
	if(max<b) max = b;
	if(max<c) max = c;
	return max;
}
