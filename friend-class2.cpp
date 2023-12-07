#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void getA(int x){
        a=x;}
    void display(){
        cout<<a<<endl;}
        friend void add(A o, B v);
};
class B {
    int b;
    public:
    void getB(int y){
        b=y;}
    void display(){
        cout<<b<<endl;}
        friend void add(A o, B v);
};
void add(A o , B v){
    cout<<"Sum = "<<o.a + v.b;
    };

int main(){
    A obj1;
    B obj2;
    obj1.getA(5);
    obj2.getB(7);
    obj1.display();
    obj2.display();
    add(obj1,obj2);
    return 0;
}