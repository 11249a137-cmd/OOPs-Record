#include<iostream>
using namespace std;
template<typename T>
T sum(T n1,T n2)
{
    T rs;
    rs=n1+n2;
    return rs;
};
int main()
{
    int A=10,B=20,c;
    long i=1.1,j=22,k;
    c=sum(A,B);
    cout<<"\n The Sum of intergervalue:"<<c;
    k=sum(i,j);
    cout<<"\n The sum of long value:"<<k;
    return 0;
}