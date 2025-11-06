#include<iostream>
#include<string>
using namespace std;
class payslip
{
private:
int emp_no,basic_pay,da,har,epf,gpy,total_ded,net_pay,p_tax;
string name,dept,design,bank_no,pan_no;
public:
void getdetails()
{
cout<<"Enter Employee number:";
cin>>emp_no;
cout<<"Enter Employee name:";
cin>>name;
cout<<"Enter Department:";
cin>>dept;
cout<<"Enter Bank account number:";
cin>>bank_no;
cout<<"Enter Basic pay:";
cin>>basic_pay;
cin<<"Enter Basic pay:";
cout<<"Enter pan no:";
cin>>pan_no;
}
void calculate()
{
da=basic_pay/100*80;
hra=basic_pay/100*10;
gyp=basic_pay+da+har;
epf=(basic_pay+da)/100*2;
p_tax=(basic_pay)/100*2;
total_ded=epf+p_tax;
net_pay=gpy_total_ded;
}
void print()

{
cout<<"\n Employee no:"<<emp_no;
cout<<"\n Employee name:"<<name;
cout<<"\n Designation:"<<design;
cout<<"\n Department:"<<dept;
cout<<"\n Bank Account number number:"<<bank_no;
cout<<"\n Pan number:"<<pan_no;
cout<<"\n Basic pay:"<<basic_pay;
cout<<"\n Net pay:"<<net_pay;
}
};
int main()
{
payslip p;
p.getdetails();
p.calculate();
p.print();
}
