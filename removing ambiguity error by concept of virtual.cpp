#include<iostream>
using namespace std;
class grandparent
{
	private: int data;
    public:set_data(int n)
    {
    	data=n;
	}
	void show_data()
	{
		cout<<"data="<<data;
	}
};
class parent1: virtual public grandparent
{
	
};
class parent2:public virtual grandparent
{
	
};
class child:public parent1, public parent2
{
	public: void show_data1()
	{
		show_data();
	}
};
int main()
{
	child ch;
	ch.set_data(5);
	ch.show_data1();
    return 0;
}

