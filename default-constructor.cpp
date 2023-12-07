#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Base constructor called\n";
    }
};

class B : public A{
    public:
    B(){
        cout<<"Derived constructor called\n";
}
};
int main(){
    B obj;
    getc;
}