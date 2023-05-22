#include<iostream>
using namespace std;
class time
{
	int hh,mm,ss;
    public:time()
    {}
    time(int s)
    {
    	hh=s/3600;
    	s=s%3600;
    	mm=s/60;
    	ss=s%60;
	}
	void display()
	{
		cout<<hh<<"hour "<<mm<<" minutes"<<ss<<" seconds"<<endl;
	}
};
int main()
{
	time t1, t2;
	t1=6000;
	t2=time(12006);
	
	cout<<"\nt1=";
	t1.display();
	cout<<"\nt2=";
	t2.display();
return 0;
}

