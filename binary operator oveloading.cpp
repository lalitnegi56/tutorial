#include<iostream>
using namespace std;
class complex
{
	float x, y;
    public:complex()
    {
	}
	complex (float a, float b)
	{
		x=a;
		y=b;
	}
	void display();
	complex operator +(complex);
};
void complex::display()
{
	cout<<x<<"+"<<y<<"j"<<endl;
}
complex complex::operator +(complex c)
{
	complex t;
	t.x=x+c.x;
	t.y=y+c.y;
	return (t);
}
int main()
{
	complex c1(2.1,3.1), c2(3.4,5.4), c3;
	cout<<"\nc1=";
	c1.display();
	cout<<"\nc2=";
	c2.display();
	c3=c1+c2;
	cout<<"\nc3=";
	c3.display();
return 0;
}

