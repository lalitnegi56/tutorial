#include<iostream>
using namespace std;
class dept_store
{
	static int count;
	int id;
	float price;
	public:dept_store(float p)
	{
		price=p;
		count++;
		id=count;
	cout<<"object with id="<<id<<" created"<<endl;
	}
	~dept_store()
	{
		cout<<"object with id="<<id<<" destroyed"<<endl;
	}
};
int dept_store::count=0;
int main()
{
	dept_store s1(20.3), s2(10.2);
	return 0;
}
