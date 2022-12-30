#include<iostream>
using namespace std;
class distance
{
	float km, m;
	public: distance(): km(0),m(0){}
	distance(float a, float b):km(a),m(b){}
	distance compare (distance d)//passing object as argument
	{
		if((km*1000+m)>(d.km*1000+d.m))
		return *this;
		if ((this->km*1000+m)<(d.km*1000+d.m))
		return d;
	}
	void diaplay()
	{
		cout<<this->km<<"km and "<<this->m<<"m"<<endl;
	}
	};
	int main()
	{
		float d1,d2,d3;
		distance:: d1(1.2,7.3),d2(1.5,10.2),d3;
		cout<<"Largest distance is:";
		d3=d1.compare(d2);//d1 is current object of function compare d1 is as a argument passed
		d3.display();
		return 0;
	}

