#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    ~demo(){ // Destructor declaration
        cout<<"Destructor call: "<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
    int main(){
        demo d1(50,60);
        d1.display();
        demo d2(100,120);
        d2.display();
        return 0;
    }