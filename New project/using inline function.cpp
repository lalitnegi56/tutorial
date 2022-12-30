#include<iostream>
inline int sum(int a, int b)
{
	int s=a+b;
	return s;
};
int main()
{
int c, d, k;
std::cout<<"enter two integers:";//displaying message
std::cin>>c>>d;
k=sum(c,d);//making function for adding two integers
{
std::cout<<"\n sum is:"<<k;
}
return 0;
}
