#include<iostream>
using namespace std;
class BCE
{
	int roll, marks;
	public:void get_data()
	{
		cin>>roll>>marks;
	}
	void show_data()
	{
		cout<<"roll="<<roll<<" and marks="<<marks<<endl;
	}
};
int main()
{
	BCE obj;
	BCE *ptr;
	ptr=&obj;
	ptr->get_data();
	ptr->show_data();
	return 0;
}
