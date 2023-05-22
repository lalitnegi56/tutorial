#include<iostream>
#include<fstream>
using namespace std;
class student
{
	char name[20];
	int roll;
	public: void read_data()
	{
		cin>>name>>roll;
	}
	void show_data()
	{
		cout<<name<<roll;
	}
};
void write2file()
{
	student stu;
	ofstream outfile("record.dat",ios::binary|ios::app);
	stu.read_data();
	outfile.write((char *)(&stu),sizeof(stu));
}
void readfromfile()
{
	student stu;
	ifstream infile("record.dat",ios::binary);
	while(!infile.eof())
	{
		if(infile.read((char *) &stu, sizeof(stu)>0))
		stu.show_data();
	}
}
void readonerec()
{
	student stu;
	int n;
	ifstream infile("record.dat",ios::binary);
	cout<<"enter the record number";
	cin>>n;
	infile.seekg((n-1)*sizeof(stu));
	stu.show_data();
}
int main()
{
	cout<<"select choices";
	int choice;
	cout<<"1.write to file";
	cout<<"\n2.for read all record from file";
	cout<<"\n3.  read one second";
	cout<<"\n4. exit from file";
	while(1)
	{
		cin>>choice;
		switch (choice)
		{
			case1:write2file();
			break;
			case2:readfromfile();
			break;
			case3:readonerec();
			break;
			case4:exit(0);
			default: cout<<"Invalid entry";
		}
	}
	return 0;
}
