#include <iostream>
using namespace std;
class dept-store
{
	static int count;
	int id;
	float price;
	public: dept-store(float p)
	{
		price=p;
		count++;
		id=count;
		cout<<"object with id="<<id<<"created"<<endl;
		~dept-store()
		{
			cout<<"object with id="<<"destroyed"<<endl;
		}
	};
	int dept-store::count=0;
	int main()
	{
		dept-store obj1(20.2),obj2(3.2),obj3(7.9);
		{
			dept-store obj4(9.3);
		}
	}
	return 0;
}
