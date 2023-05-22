#include<iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
	return (a+b);
}
template <class T1, class T2>
T1 add(T1 a, T2 b)
{
    return (a+b);
}
int main()
{
	int a=9, b=10;
	float c=3.2;
	cout<<"sum a+b="<<add(a,b);
	cout<<"\n sum c+a="<<add(c,a);
	cout<<"\n sum c+b="<<add (c,b);
	return 0;
}

