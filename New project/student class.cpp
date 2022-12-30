#include<iostream>
using namespace std;
class student
{
	public: char name[30];
	        int roll;\
	        float marks;
	        void input()
	        {
	        	cout<<"enter name:";
	        	cin>>name;
	        	cout<<"enter roll:";
	        	cin>>roll;
	        	cout<<"enter marks:";
	        	cin>>marks;
			}
			void display()
			{
				cout<<name<<roll<<marks;
			}
};
int main()
{
	student ram;
	ram.input();
	ram.display();
	return 0;
}
