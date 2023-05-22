#include<iostream>
using namespace std;
class animal
{
    public:virtual void display()
    {
    	cout<<"from animal class";
	}
};
class cow:public animal
{
	public: void display()
	{
		cout<<"\nfrom cow class";
	}
};
class dog:public animal
{
	public: void display()
	{
		cout<<"\nfrom dog class";
	}
};
int main()
{
	animal a1;
	cow c1;
	dog d1;
	animal *ptr[]={&a1, &c1, &d1};
	for(int i=0; i<3; i++)
	ptr[i]->display();
    return 0;
}

