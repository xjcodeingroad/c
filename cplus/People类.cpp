#include<iostream> 
using namespace std;
class People
{
	protected:
		int age;
		int height;
		int weight;
		static int num;
	public:
		People(int,int,int);
		void Eating();
		void Sporting();
		void Sleeping();
		void Show();
		static void ShowNum();
}; 
People::People(int a,int h,int w)
{
	age=a;
	height=h;
	weight=w;
}
void People::Eating()
{
	weight+=1;
}
void People::Sporting()
{
	height+=1;
}
void People::Sleeping()
{
	age+=1;
	height+=1;
	weight+=1;
}
void People::Show()
{
	cout<<"weight:"<<weight<<"height:"<<height<<"age:"<<age<<endl;
}
void People::ShowNum()
{
	cout<<"num:"<<num<<endl;
}
int People::num=10;
int main()
{
	People people(20,180,120);
	people.Eating();
	people.Sleeping();
	people.Sporting();
	people.Show(); 
	People::ShowNum();
	return 0;
}
