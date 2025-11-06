#include<iostream>
using namespace std;
class complex
{
    float real,imag;
    public:
    complex (float r=0,float i=0)
    {
        real=r;
        imag=i;
    }
    complex operator+(complex obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<end l;
    }
    {;
        int main()
        {
            complex c1(3,3),c2(1,4);
            complex c3=c1+c2;
            cout<<"first complex Number:";
            c1.display();
            cout<<"second complex Number:";
            c2.display();
            cout<<"sum of two complex Number:";
            c3.display();
            cout<<"sum of two complex Number:";
            c3.display();
            return 0;
        }
    }
};
