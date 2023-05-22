#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public: space()
	{
		x=0;
		y=0;
		z==0;
	}
	space (int a, int b, int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void display()
	{
		cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
	}
	void operator -();
};
void space::operator -()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	space s1(100,200,300);
	-s1;
	s1.display();
	return 0;
}
