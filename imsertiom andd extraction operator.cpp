#include<iostream>
#include<conio.h>
using namespace std;
class dept
{
	int id;
	char item[50];
	float price;
    public: dept()
    {
    	id=1;
    	strcpy(item,"pen");
    	price=10;
	}
	friend istream& operator>>(istream&, dept&);
	friend ostream& operator<<(ostream&, dept&);
};
istream& ostream>>(istream &din, dept &d1)
{
	cout<<"enter id, item, name and price:";
	din>>d1.id;
	din>>d1.item;
	din>>d1.price;
	return (din);
}
ostream& operator<<(ostream &dout, dept &d2)
{
	dout<<d2.id;
	dout<<d2.item;
	dout<<d2.price;
	return (dout);
}
int main()
{
	dept d1,d2;
	cout<<"enter first item details";
	cin>>d1;
	cout<<"enter second item details";
	cin>>d2;
	cout<<"full item details:";
	cout<<d1<<d2;
    return 0;
}

