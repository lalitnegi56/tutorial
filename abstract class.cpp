#include<iostream>
using namespace std;
class dimension
{
	protected: int length, breadth;
    public: dimension(int l, int b)
    {
    	length=l;
    	breadth=b;
	}
	virtual void area()=0;
};
class square:public dimension
{
	public:square(int l):dimension(l,l)
	{}
	void area()
	{
		cout<<"area of square="<<length*length;
	}
};
class reactangle:public dimension
{
	public:rectangle(int l, int b):dimension(l,b){}
	void area()
	{
		cout<<"area of rectangle ="<<length*breadth;
	}
};
int main()
{
	square s1(50);
	rectangle r1(20,30);
	dimension *ptr[]={&s1, &r1};
	for(int i=0; i<2; i++);
	ptr->area();
    return 0;
}

