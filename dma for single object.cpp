#include<iostream>
using namespace std;
class complex
{
	float real, img;
	public:complex()
	{
		real=0;
		img=0;
	}
	complex(float r, float i)
	{
		real=r;
		img=i;
	}
	void show()
	{
		cout<<real<<"+j"<<img<<endl;
	}
};
int main()
{
	int i, n;
	complex *ptr;
	ptr=new complex(5.5, 6.5);
	ptr->show();
	return 0;
}
