#include<iostream
using namespace std;
class student2;
class student1
{
private :
int marks;
public:
student1()
{
cout<<"Enter marks:";
cin>>marks;
}
friend void compare marks (student1,student2);
};
class student2
{
private:
int marks;
public:
student2()
{
cout<<"Enter Marks:";
cin>>marks;
}
friend void compare maeks(student1a, student2b);
};
void compare marks(student1a, student2b)
{
if(a.marks>b.marks)
cout<<"The marks of student2 is less than student1.\n";
else if(a.marks<b.marks)
cout<,"The marks of student1 is less than student2.\n";
else 
cout<<"The marks of both student is equal .\n";
}
int main()
{
student1 s1;
student2 s2;
compare marks(s1,s2);
return 0;
}


