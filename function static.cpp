#include<iostream>
using namespace std;
class BCT
{
	int code;
	static int count;
	public: void setcode()
	{
		count++;
		code=count;
	}
	void showcode()
	{
		cout<<"student code="<<code<<"/BCT/078"<<endl;
	}
	static void showcount()
	{
		cout<<"records of "<<count<<" students found"<<endl;
	}
};
int BCT::count;
int main()
{
	BCT s1, s2;
	s1.setcode();
	s2.setcode();
	s1.showcode();
	s2.showcode();
	BCT::showcount();
	return 0;
	}
