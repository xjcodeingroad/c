#include<iostream>
#include<string.h>
using namespace std;
class Dog
{
	private:
	 	char* name;
	 	int age;
	 	char sex;
	 	int weight;
	public:
		Dog(const char*,int,char,int);
		void showBase();
		
	 	
	 	
};
Dog::Dog( const char* n,int ag,char se,int we)
{
	name = new char[strlen(n)+1];
	strcpy(name,n);
	age = ag;
	sex = se;
	weight = we;
}
void Dog::showBase()
{
	cout<<"name:"<<name<<"age:"<<age<<"sex:"<<sex<<"weight:"<<weight<<endl;
} 
int main()
{
	
	Dog *pt;
	Dog p("zhangsan",24,'f',80);
	pt = &p;
	pt->showBase();
}
