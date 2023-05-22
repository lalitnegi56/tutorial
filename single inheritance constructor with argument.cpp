#include<iostream>
using namespace std;
class base
{
	protected: int mark1, mark2;
    public: base(int a, int b)
    {
    	mark1=a;
    	mark2=b;
	}
};
class derived: public base
{
    int total;
	public: derived():base(5,6)
	{
		total=0;
	}
	void calculate()
	{
		cout<<"Total mark="<<mark1+mark2;
	}
};
int main()
{
	derived d1;
	d1.calculate();
    return 0;
}

