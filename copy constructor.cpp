#include<iostream>
using namespace std;
class student
{
	int id;
	public: student(){}
	student (int a)
	{
		id=a;
	}
	student (student &s)
	{
		id=s.id;
	}
	int display()
	{
		return(id);
	}
};
int main()
{
	student s1(200);
	student s2(s1);
	cout<<"Id of student s1:"<<s1.display()<<endl;
	cout<<"Id of student s2:"<<s2.display()<<endl;
	return 0;
}
