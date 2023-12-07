#include<iostream>
using namespace std;

class A{
    public:
    virtual void disp()=0;
};
class B :public A {
    public:
    void disp(){
        cout<<"Hello\n";
    }
};

int main(){
    A *p;
    B obj;
    p = &obj;
    p->disp();
    getc;
}