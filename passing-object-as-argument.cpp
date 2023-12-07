#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void set(int i){
        a=i;
    }
    void sum(demo &d, demo &e){
        a=d.a+e.a;
    }
    void display(){
        cout<<"sum of two numbers is "<<a<<endl;
    }
};
int main() {
    demo d, d1, d2;
    d.set(5);
    d1.set(7);
    d2.sum(d, d1);
    d2.display();
    return 0;
}