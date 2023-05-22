#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	char name[20], email[30];
	ofstream outfile("data.txt");
	cout<<"enter name and email";
	cin>>name>>email;
	outfile.close();
	ifstream infile("data.txt");
	infile>>name;
	infile>>email;
	cout<<"data read from file are:";
	cout<<name<<email;
	return 0;
}
