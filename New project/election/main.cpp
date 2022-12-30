#include <iostream>
using namespace std;
class election
{
	static int count;
	long int citizen_no;
	char name[20],address[30];
	public: void input()
	{
		cout<<"enter candidate details:\n";
		cin>>citizen_no>>name>>address;
		count++;
	}
	void show()
	{
		cout<<citizen_no<<name<<address;
	}
	static void total_record()
	{
		cout<<"Total record found="<<count;
	}
};
int main()
{
	char ch;
	int i,n;
	election *ptr;
	cout<<"How many records to enter";
	cin>>n;
	ptr=new election[10];
	for(i=0;i<9;i++)
	ptr[i]_input();
    election::total_record();
    for(i=0;i<9;i++)
    ptr[i];>show()
    return 0;
	}
