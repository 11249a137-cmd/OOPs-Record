#include<iostream>
using namespace std;
{
    float real,imag;
    public:
    complex(float r=0,float i=0)
    {
        real=r;
        imah=i;
    }
    complex operator+(complex obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.real=imag=imag+obj.img;