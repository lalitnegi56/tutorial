#include<iostream>
using namespace std;
class complex
{
	float r, i;
	public:void get_data()
	{
		cout<<"enter real and imaginary parts";
		cin>>r>>i;
	}
	void magnitude() const;
};
void complex::magnitude() const
{
	float mag;
	mag= sqrt(pow(r,2)+pow(i,2));
	cout<<mag;
}
int main()
{
	complex c1;
	c1.get_data();
	c1.magnitude();
	return 0;
}

