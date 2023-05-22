#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[35];
	int age;
	ifstream infile("employee.dat",ios::binary);
	infile.read(reinterpret_cast<char*>(&name),sizeof(name));
	infile.read(reinterpret_cast<char*>(&age),sizeof(age));
	cout<<"data fron file"<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age;
    return 0;
}

