#include<iostream>
using namespace std;
class student {
    private:
    int value;
    public:
    student(int s){
        value=s;
        cout<<"constructor called!value is set to"<<value<<endl;
    }
    ~student(){
        cout<<"destructor called!value is set to"<<value<<endl;
    }
    void display(){
    cout<<"value:"<<endl;
    }
};
int main(){
    cout<<"Creating object d1"<<endl;
    student d1(15);
    d1.display();
    cout<<"creating object d2"<<endl;
    student d2(56);
    d2.display();
    cout<<"End of the main function"<<endl;
    return 0;
}