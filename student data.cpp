#include<iostream>
using namespace std;
class Computer
{
	char name[20];
	int roll_number;
	int semester;
	int year[6];
	public: void get_data()
	{
		cout<<"Enter student name, roll_number, semester, year";
		cin>>name>>roll_number>>semester>>year;
	}
	void display()
	{
		cout<<"Data of student are:"<<endl;
		cout<<name<<"\t"<<roll_number<<"\t"<<semester<<"\t"<<year;
	}
};
int main()
{
	Computer s1;
	s1.get_data();
	s1.display();
}
