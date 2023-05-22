#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public: void enter(int x)
	{
		a=x;
	}
	void show(B);
};
class B
{
	int b;
	public:void enter(int y)
	{
		b=y;
	}
	friend void A::show(B);
};
void A::show(B obj)
{
	cout<<"\n a=";
	cout<<"\n b="<<obj.b;
}
int main()
{
	A obj1(12);
	B obj2(20);
	obj1.show(obj2);
	return 0;
}
