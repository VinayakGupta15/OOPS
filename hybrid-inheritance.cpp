#include<iostream>
using namespace std;

class A{
    public:
    void disp(){
    cout<<"Welcome ";
    }
};
class B:public A{
    public:
    void disp_b(){
    cout<<"Buddy ";
    }
};

class C : public A,B{
    public:
    void disp_c(){
        cout<<"Hello ";
    }
};

class D : public A,B,C{
    public:
    void disp_d(){
        cout<<"Dude ";
    }
};
int main(){
    A obj;
    obj.disp();
    B obj1;
    obj1.disp_b();
    C obj2;
    obj2.disp_c();
    D obj3;
    obj3.disp_d();
    getc;
}