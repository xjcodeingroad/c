#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		char name[18];
		int num;
		int mathScore;
		int englishScore;
	static	int count;
	static	int mathTotalScore;
	static	int englishTotalScore;
	
	public:
		Student(char* ,int,int,int);
		 void ShowBase();
		 static void ShowStatic();
		
};
Student::Student(char nm[18],int nu,int math,int english)
{
	strcpy(name,nm);
	num=nu;
	mathScore=math;
	englishScore=english;
	count++;
	mathTotalScore+=mathScore;
	englishTotalScore+=englishScore;
}
void Student::ShowBase()
{
	cout<<"name:"<<name<<"num:"<<num<<"mathScore:"<<mathScore<<"englishScore:"<<englishScore<<endl;
	
}
void Student::ShowStatic()
{
	cout<<"count:"<<count<<"mathTotalScore:"<<mathTotalScore<<"englishTotalScore:"<<englishTotalScore<<endl;
}
int Student::count=0;
int Student::mathTotalScore=0;
int Student::englishTotalScore=0;
int main()
{
	Student student[3]={
	Student("zhangsan",102,23,123),
	Student("lisi",103,123,89),
	Student("wangerma",104,110,124) 
	
	};
	int i;
	for(i=0;i<3;i++)
	{
		student[i].ShowBase();
	} 
	Student::ShowStatic();
	return 0;
	
	
}
