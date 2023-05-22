#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class number
{
    private:float num;
    public:class neg
    {
    	public:float value;
    	char description[30];
    	neg()
    	{
    		value=0;
    		description[0]='\0';
		}
		neg(float v, char *desc)
		{
			value=v;
			strcpy(description, desc);
		}
	};
	void readnum();
	float sqrt();
};
void number::readnum()
{
	cout<<"enter number";
	cin>>num;
}
float number::sqrt()
{
	if(num<0)
	throw neg(num, "you entered negative number");
	else
	return(sqrt(num));
}
int main()
{
	number n1;
	float res;
	n1.readnum();
	try
	{
		cout<<"trying to find sqroot";
		res=n1.sqrt();
		cout<<"sqroot="<<res<<"exception not raised";
	}
	catch(number::neg n)
	{
		cout<<":exception occured";
		cout<<"value is="<<n.value<<"and error message is"<<n.description;
	}
    return 0;
}

