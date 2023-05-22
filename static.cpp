#include<iostream>
 using namespace std;
 
 class Book{
     int bookid;
     float price;
     static int count; //static data member
     public: void getdata(int i,float j)
     {
         bookid=i;
         price=j;
         ++count; //count the number of objects
     }
     void showdata()
     {
         cout<<"Book ID: "<<bookid<<"\t";
         cout<<"Price: "<<price<<"\n";
     }
     static void showcount() //Static member function
     {
         cout<<"Count of objects of class Book: "<<count<<"\n";
     }
 };
 
 int Book::count=0; // initializing the static data member to 0
 int main()
 {
     Book B1, B2;
     B1.getdata(198, 2550.3);
     B2.getdata(174, 3756.89);
     Book::showcount(); //calling static member function
     B1.showdata();
     B2.showdata();
     Book B3;    //another object of the class is created
     B3.getdata(345,5432.4);
     Book::showcount(); //calling static member function again
     B1.showdata();
     B2.showdata();
     B3.showdata();
     return 0;
 }
 

