#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20], email[30];
	ofstream outfile;
	outfile.open("contact.doc");
	cout<<"Input name:";
	cin>>name;
	cout<<"Input email:";
	cin>>email;
	outfile<<name;
	outfile<<email;
	outfile.close();
	ifstream infile;
	infile.open("contact.doc");
	cout<<"\nname="<<name;
	infile>>name;
	cout<<"\nemail="<<email;
	infile>>email;
	return 0;
}
