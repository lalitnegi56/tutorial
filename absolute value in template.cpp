#include<iostream>
using namespace std;
template <class T1, class T2>
void calc(T1 a[], int size, T2 &sum, T2 &avg)
{
for (int i=0; i<size; i++)
sum+=a[i];
avg=sum/size;
}
int main()
{
	int a[]={1,2,3,4,5};
	float sum=0.0, avg=0.0;
	calc(a, 5, sum, avg);
	cout<<"sum="<<sum<<" "<<"avg="<<avg<<" ";
	float b[]={1.1, 2.3, 4.5,7.1};
	double sb=0.0, pb=0.0;
	calc(b, 4, sb, pb);
	cout<<"\n sum="<<" "<<sb<<"avg="<<pb<<" ";
	return 0;
}
