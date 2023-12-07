#include<iostream>
using namespace std;
class demo{
    int a,b;
    public: 
    demo(int x){
        a=b=x;
    }
    demo(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
    int main(){
        demo d(0) ;
        d.display();
        demo d1(50,60);
        d1.display();
        
        return 0;
    }
    
