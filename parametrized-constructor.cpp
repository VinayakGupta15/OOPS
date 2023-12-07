#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int i){
        a=i;
    }
    void disp_a(){
        cout<<"Value of a: " <<a;
    }
};
class B{
    int b;
    public:
    B(int j){
        b=j;
    }
    void disp_b(){
        cout<<"Value of b: " <<b;
    }
};

class C :public A, public B {
    int x;
    public:
    C(int a, int b, int z) : A(a), B(b){
        x = z;
    }
    void disp_c(){
        cout<<"Value of c: .`" <<x;
    }
};

int main(){
    C obj(20,30,40);
    obj.disp_a();
    cout<<endl;
    obj.disp_b();
    cout<<endl;
    obj.disp_c();
    getc;
}