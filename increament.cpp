#include<iostream>
using namespace std;
class Complex
{
    int a,b,c;
    public:
    Complex()
    {

    }
    void getvalue()
    {
        cout<<"Enter the Two Numbers:";
        cin >> a >> b;
    }
    void operator++()
    {
        a=++a;
        b=++b;
    }
    void operator--()
    {
        a=--a;
        b=--b;
    }
    void operator++(int)
    {
        a++;
        b++;
    }
    void operator--(int)
    {
        a--;
        b--;
    }
    void display()
    {
        cout<< a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex obj;
    obj.getvalue();
    obj++;
    cout<<"After incrementing Complex Number:\n";
    obj.display();
    obj--;
    cout<<"After decrementing Complex Number:\n";
    obj.display();
    return 0;
}
  