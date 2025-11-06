#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public;
    void get data();
    void calculate();
    void print();
};
void student::get data()
{
    cout<<"Enter rollNo";
    cin>>rollno;
    cout<<"Enter Name";
    cin>>name;
    cout<<"Enter 3 marks";
    cin>>m1;
    cin>>m2;
    cin>>m3;
}
void student::calcualte()
{
    total=m1+m2+m3;
    avg=total/3;
}
void student::print()
{
    cout<<"\n Name:"<<name;
    cout<<"\n Rollno:"<<rollno;
    cout<<"\n Mark 1:"<<m1;
    cout<<"\n Mark 2:"<<m2;
    cout<<"\n Mark 3:"<<m3;
    cout<<"\n Total:"total;
    cout<<"\n Avg:"avg;
}
int main()
{
    student s[100]
    int i,n;
    cout<<"Enter then value";
    cin>>n;
    for(i=0; i<n; i++)
    s[i].get data()
    s[i].calculate()
    s[i].print()
}


