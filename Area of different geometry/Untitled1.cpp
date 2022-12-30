#include<iostream>
using namespace std;
class calculation
{
	public: void area1 (int x, int y)
   {
   	int a=x*y;
   	cout<<"\n The area of rectangle is="<<a<<endl;
   }
   void area2 (float x)
   {
   	float a=(22/7)*x*x;
   	cout<<"\n The area of cylinder is="<<a<<endl;
   }
   void area3 (int x)
   {
   	int a=x*x;
   	cout<<"The area of square is="<<a<<endl;
   }
};
int main()
{
	calculation d, e, f;
	d.area1(2,8);
	e.area2(9.5);
	f.area3(6);
	return 0;
}
