#include<iostream>
using namespace std;
template <class T1, class T2>
class abc
{
	private: T1 a;
	        T2 b;
	public: abc(T1 x, T2 y)
	{
		a=x;
		b=y;
	}
	void show();
};
template <class T1,class T2>
void abc<T1, T2>::show()
{
	cout<<"a="<<a<<" and b="<<b;
}
int main()
{
	abc<int, float>obj1(2,9.3);
	cout<<"Data of obj1 are:"<<endl;
	obj1.show();
	abc<char,double>obj2('A',9.369);
	cout<<"\nData of obj2 are:"<<endl;
	obj2.show();
	return 0;
}


