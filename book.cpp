#include<iostream>
using namespace std;
class books
{
private:
char ISBNO[50], Bookname[50],Author[50];
int page,Accno;
float price;
public:
void getdetails()
{
cout<<"Enter ISBNO";
cin>>ISBNO;
cout<<"Bookname";
cin>> Bookname;
cout<<"Enter Author;
cin>>Author;
cout<<"Enter  pages";
cin>>AccNO;
cout<<"Enter price";
cin>>price;
}
void display()
{
cout<<"ISBNO:"<<ISBNO;
cout<<"Bookname:"<<Bookname;
cout<<"author:"<<Author;
cout<<"pages:"<<Pages;
cout<<"Accno:"<<Accno;
cout<<"price:"<<price;
}
};
int main()
{
 booksb;
 b.display();
 b.getdetails();
}
