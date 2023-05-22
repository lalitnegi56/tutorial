#include<iostream>
#include<math.h>
using namespace std;
class polar
{
	float radius;
	int angle;
    public:polar()
    {}
    polar (float rad, int ang)
    {
    	radius=rad;
    	angle=ang;
	}
	float return_rad()
	{
		return radius;
	}
	int return_ang()
	{
		return angle;
	}
	void display()
	{
		cout<<radius<<angle;
	}
};
class cartesian
{
	float xco, yco;
	public: cartesian(){}
	cartesian (float x, float y)
	{
		xco=x;
		yco=y;
	}
	cartesian(polar p)
	{
		xco=p.return_rad()*cos(p.return_ang());
		yco=p.return_rad()*sin(p.return_ang());
	}
	void display()
	{
		cout<<xco<<"\n"<<yco;
	}
};
int main()
{
	polar pol(5.2,45);
	cartesian cart;
	cart=pol;
	cout<<"data in polar form:";
	pol.display();
	cout<<"data in caresian form;";
	cart.display();
	return 0;
}

