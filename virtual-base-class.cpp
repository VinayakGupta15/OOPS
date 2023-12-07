#include<iostream>
using namespace std;
class A{
    public:
    int a;
};
class B : virtual public A{
    public:
    int b;
};
class C : virtual public A{
    public:
    int c;
};
class D : public B, public C{
    public:
    int d;
};
int main(){
   D obj;
   obj.a=10;
   cout<<"A's address = "<<obj.a<<endl;
   return 0;
}