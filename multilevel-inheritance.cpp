#include<iostream>
using namespace std;

class A{
    public:
    void disp(){
    cout<<"Welcome ";
    }
};
class B : public A{
    public:
    void disp_b(){
    cout<<"Buddy ";
    }
};

class C : public B{
    public:
    void disp_c(){
        cout<<"Hello ";
    }
};
int main(){
    A obj;
    obj.disp();
    B obj1;
    obj1.disp_b();
    C obj2;
    obj2.disp_c();
    getc;
}