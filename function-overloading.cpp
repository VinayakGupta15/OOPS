#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    void get(){
        a=0;
        b=0;
    }
    void get(int x){
        a=b=x;
    }
    void get(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"Value of a and b "<<a<<b;
    };
};

int main() {
    demo d1;
    d1.get(7);
    d1.display();
    cout<<endl;
    d1.get(6,7);
    d1.display();
    cout<<endl; 
    return 0;
    }