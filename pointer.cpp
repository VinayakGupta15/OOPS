#include<iostream>
using namespace std;
int main() {
    int num = 30;
    int *p;
    p = &num;
    cout << "Value of variable x is :"<<*p<<endl;
    cout<<"Address of num is : "<<&num<<endl;
    cout<<"Address of P variable is : "<<p<<endl;
    return 0; 
}