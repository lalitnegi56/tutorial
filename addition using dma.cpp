#include<iostream>
using namespace std;
int main()
{
	int *pa, *pb, *psum;
	pa= new int;
	pb=new int;
	psum=new int;
	cout<<"enter two numbers:"<<"\b"<<endl;
	cin>>*pa>>*pb;
	*psum=*pa+*pb;
	cout<<"sum="<<*psum;
	delete pa;
	delete pb;
	delete psum;
	return 0;
}
