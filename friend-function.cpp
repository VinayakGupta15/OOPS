#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void get_data(int x){
        a=x;
    }
    void display(){
        cout<<"a = "<<a;}
    friend void sq(A object);
    };
void sq(A object){
    cout<<"Square = "<<object.a * object.a;
    
}
int main() {
    A o;
    int a;
    cout<<"Enter the Value of a : ";
    cin>>a;
    o.get_data(a);
    sq(o);
    //o.display();
    return 0;

}