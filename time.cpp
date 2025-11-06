#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minutes;
    public:
    void getTime();
    void addTime(Time t1,Time t2);
    void displayTime();
};
void Time::getTime()
{
cout<<"Enter the hours:";
cin>>hours;
cout<<"Enter the minutes:";
cin>>minutes;
}
void Time::addTime(Time t1,Time t2)
{
minutes=t1.minutes+t2.minutes;
hours=minutes/60;
minutes=minutes%60;
hours=hours+t1.hours+t2.hours;
}
void Time::displayTime()
{
cout<<"hours:"<<hours<<endl;
cout<<"minutes:"<<minutes<<endl;
}
int main()
{
    Time t1,t2,t3;
    t1.getTime();
    t2.getTime();
     t3.addTime(t1,t2);
    t3.displayTime();
    return 0;
}

