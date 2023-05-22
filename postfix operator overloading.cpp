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
	void operator ++(int);
};
void counter::operator ++(int)
{
	count++;
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
