#include<iostream>
using namespace std;
class space
{
	int x, y, z;
	public:space()
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
	friend void operator -(space &);
};
void operator -(space &p)
{
	p.x=-p.x;
	p.y=-p.y;
	p.z=-p.z;
}
int main()
{
	space s1, s2(100,200,300);
	-s2;
	s2.display();
	return 0;
}
