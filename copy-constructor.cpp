#include<iostream>
using namespace std;

class A{
    int price, item;
    public:
    A(int a, int b){
        price = a;
        item = b;
    }
    A(A &t){
        price = t.price;
        item = t.item;
    }
    void disp(){
        cout<<"Price : "<<price<<endl;
        cout<<"Item  : "<<item<<endl;
    }
};
int main(){
    A obj1(50,2);
    A obj2(obj1); //copy constructor called here
    obj2.disp();
    getc;
}