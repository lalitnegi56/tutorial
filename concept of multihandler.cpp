#include<iostream>
using namespace std;
class multi_handler
{
    public:void test(int k)
    {
    	try
    	{
    		if(k==1)
    		throw k;
    		else if (k==0)
    		throw 'a';
    		else if (k==-1)
    		throw 3.1;
    		cout<<"\nTry block ended";
    	}
    	catch (char c)
    	{
   			cout<<"\n Caught a character";			}
		catch (int l)
		{
			cout<<"\n Caught an integer";			
		}
		catch (float t)
		{
			cout<<"\n caught a float";		
		}
		cout<<"end of try catch system";
	}
};
int main()
{
	cout<<"multiple catches";
	multi_handler l,m,n,p,q;
	l.test(1);
	m.test(6);
	n.test(-1);
	p.test(3);
	return 0;
}
