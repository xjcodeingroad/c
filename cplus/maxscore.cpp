#include<iostream>
#include<cmath>
using namespace std;
class Student
{
private:
    int num;
    int score;
public:
    Student(int a,int b);
    ~Student();
    int getscore();
    void show();

};

Student::Student(int a,int b)
{
    num = a;
    score=b;
}

Student::~Student()
{
}
int Student::getscore()
{
    return score;
}
void Student::show()
{
	cout<<"num:"<<num<<"score:"<<score<<endl;
	
}
int maxScore( Student* a,int len)
{
	Student* b = a; 
    int maxs = b->getscore();
    int temp=0;
    for (int i = 1; i < len; i++)
    {
        b++;
        temp=b->getscore();
        if(maxs<temp) maxs = temp;
        
    }
    return maxs;
    
}
int main()
{
    Student student[5]=
    {
        Student(10,98),
        Student(11,45),
        Student(12,65),
        Student(13,76),
        Student(14,73)
    };
    Student *s = &student[0]; 
    int maxscore = maxScore(s,5);
   cout<<"maxscore:"<<maxscore<<endl;
   student[0].show();
   student[2].show();
   student[4].show();
    return 0;
}
