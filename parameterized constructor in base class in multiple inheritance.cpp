#include<iostream>
using namespace std;
class alpha
{
	protected: int x;
    public:alpha(int i)
    {
    	x=i;
    	cout<<"\nalpha constructor";
	}
};
class beta
{
	protected: float p,q;
	public: beta(float a, float b)
	{
		p=a;
		q=b;
		cout<<"\nbeta constructor";
	}
};
class gamma: public alpha, public beta
{
	int u, v;
	public: gamma(int a, int b, float c):alpha(b), beta(c,c)
	{
		u=a;
		v=b;
		cout<<"\ngamma constructor";
	}
	void show()
	{
			
		cout<<x<<p<<q<<u<<v;
	}

};
int main()
{
	gamma g;
	g.show();
    return 0;
}

