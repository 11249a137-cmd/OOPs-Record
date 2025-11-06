#include<iostream>
using namespace std;
class student{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdata()
{
    cout<<"\n Enter Roll No:";
    cin>>rollno;
    cout<<"Enter Name";
    cin>>name;
    cout<<"Enter 3 marks";
    cin>>m1>>m2>>m3;
}
void calculate()
{
    total=m1+m2+m3;
    avg=total/3;
}
void print()
{
    cout<<"\n Name:"<<name;
    cout<<"\n Rollno:"<<rollno;
    cout<<"\n Mark 1:"<<m1;
    cout<<"\n Mark 2:"<<m2;
    cout<<"\n Mark 3:"<<m3;
    cout<<"\n Total:"<<total;
    cout<<"\n Avg:"<<avg<<"\n";
}
};
int main(){
    cout<<"Enter number of students:";
    cin>>n;
    student s[100];
    for(int i=0;i<n;i++){
        cout<<"\nEnter details for student"<<i+1<<":\n";
        s[i].getdata();
        s[i].calculate();
    }
    cout<<"\n STUDENT DATA\n";
    for(int i=0;i<n;i++){
        s[i].print();
    }
}
