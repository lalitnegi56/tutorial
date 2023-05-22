#include<iostream>
using namespace std;
class mango;
class apple
{
	int x;
	public:void enter()
	{
		cout<<"value of x=";
		cin>>x;
	}
	void show()
	{
		cout<<"value of x="<<x<<endl;
	}
	void swap(mango &);
};
class mango
{
	int y;
	public:void input()
	{
		cout<<"value of y=";
		cin>>y;
	}
void show()
{
	cout<<"value of y="<<y<<endl;
}
friend void apple::swap(mango &);
};
void apple::swap(mango &obj)
{
	int temp=x;
	x=obj.y;
	obj.y=temp;
}
int main()
{
	apple obj1;
	mango obj2;
	obj1.enter();
	obj2.input();
	cout<<"values before swapping"<<endl;
	obj1.show();
	obj2.show();
	cout<<"values after swapping"<<endl;
	obj1.swap(obj2);
	obj1.show();
	obj2.show();
	return 0;
}
