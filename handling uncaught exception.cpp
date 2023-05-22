#include<iostream>
#include<cstdlib>
using namespace std;
void myhandler()
{
	cout<<"\n new terminator function defined by user";
	exit(0);
}
int main()
{
	set_terminate(myhandler);
	try
	{
		cout<<"inside try block";
		throw 200;
	}
	catch(char a)
	{
		cout<<"Inside catch block";
	}
	return 0;
}
