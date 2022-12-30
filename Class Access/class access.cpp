#include<iostream>
using namespace std;
class student
{
	public:  char name[20];
	         int roll;
	         float marks;
	         int age;
	 void input()
	{
		cout<<"Enter name,roll,marks and age"<<endl;
		cin>>name>>roll>>marks>>age;
	}
	void display()
	{
		cout<<name<<roll<<marks<<age;
	}
};
int main()
{
	student Ram, s, t, p;
	Ram.input();
    Ram.display();  
    s.input();
    s.display();
    return 0;
}
