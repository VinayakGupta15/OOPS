#include<iostream>
using namespace std;
class test{
    int x,y,z;
    public:
    void get(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
    void display(){
        cout<<"Value of x: "<<x;
        cout<<"\nValue of y: "<<y;
        cout<<"\nValue of z: "<<z<<endl;
    }
    void operator-(){
        x=-x;
        y=-y;
        z=-z;
    }
};
int main() {
    test t;
    t.get(10,20,30);
    t.display();
    -t;
    t.display();
    getc;
}
 