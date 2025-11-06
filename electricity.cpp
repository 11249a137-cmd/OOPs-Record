#include<iostream>
using namespace std;
class EB
{
    private:
    int current,units,customerid;
    float amount;
    char name[50];
    public:
    void getdetails();
    void computebill();
    void printbill();
};
void EB::getdetails()
{
    cout<<"Enter customerid";
    cin>>customerid;
    cout<<"Enter amount of units consumed";
    cin>>units;
    cout<<"Enter custonerNamr";
    cin>>name;
}
void EB::computebill()
{
    if(units<=100)
    amount=0;else if(units<=200)
amount=(units-100)*2.25;
else if (units<=400)
amount=(100*2.25)+(units-200)*4.25;
else if (units<=600)
amount=(100*2.25)+(200*4.25)+(units-400)*600;
else if(units>600)
amount=(100*2.25)+(200*4.45)+(200*6)+(units-600)*9;
}
void EB::printbill()
{
    cout<<"--Electricity Bill---"<<endl;
    cout<<"customerid"<<customerid<<endl;
    cout<<"Name";
    cout<<"units"<<units;
    cout<<"Amount"<<amount;
}
    int main()
    {
    EB E1;
    E1.getdetails();
    E1.computebill();
    E1.printbill();
    return 0;
    }
