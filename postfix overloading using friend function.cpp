#include<iostream>
using namespace std;
class counter
{
	int count;
	public: counter()
	{
		count=0;
	}
	void display()
	{
	
	cout<<"count="<<count;
	}
	friend void operator ++(counter &, int);
};
void operator ++(counter &c1,int)
{
	c1.count++;
}
int main()
{
	counter c;
	c.display();
	c++;
	c++;
	c++;
	cout<<"\nafter increment ";
	c.display();
	return 0;
}
