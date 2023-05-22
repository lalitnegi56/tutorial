#include<iostream>
using namespace std;
class Election
{
	static int count;
	char name[30], address[30];
	long int citizen_no;
	public:void input()
	{
		cout<<"Please enter candidate details here:"<<endl;
		cout<<"\nenter name:";
		cin>>name;
		cout<<"\nenter citizenship number:";
		cin>>citizen_no;
		cout<<"\nenter address:";
		cin>>address;
		count++;
	}
	void display()
	{
		cout<<name<<citizen_no<<address;
	}
	static void total_record()
	{
		cout<<"Total records found="<<count<<endl;
	}
};
int Election::count=0;
int main()
{
	char ch;
	int i, n;
	Election *ptr;
	cout<<"how many records to enter:";
	cin>>n;
	ptr=new Election[n];
	for(i=0; i<n; i++)
	ptr->input();
	Election::total_record();
	for(i=0; i<n; i++)
	ptr->display();
	delete[] ptr;
	return 0;
}
