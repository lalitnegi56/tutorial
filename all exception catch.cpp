#include<iostream>
using namespace std;
class catch_all
{
    public: void test_func(int p)
    {
    	try
    	{
    		if (p==0);
    		throw 9;
    		if(p==1);
    		throw 'l';
    		if (p==1);
    		throw 2.1;
		}
		catch(...)
		{
			cout<<"I catched all exceptions & I can handle all";
		}
		cout<<"\ngoing out of class"<<endl;
	}
};
int main()
{
	catch_all c1,c2,c3;
	c1.test_func(0);
	c2.test_func(-1);
	c3.test_func(1);
	return 0;
}

