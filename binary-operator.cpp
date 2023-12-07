#include<iostream>
using namespace std;

class Binary{
    int binary;
    public:
    Binary(){
        binary = 0;
    }
    Binary(int num){
        binary = num;
    }
    Binary operator & (Binary b){
        Binary result;
        result.binary = binary & b.binary;
        return result;
    }
    Binary operator | (Binary b){
        Binary result;
        result.binary = binary | b.binary;
        return result;
    }
    Binary operator ^ (Binary b){
        Binary result;
        result.binary = binary ^ b.binary;
        return result;
    }
    void display(){
        cout<<"Binary value = "<<binary<<endl;
    }
};

int main(){
    Binary b1(5), b2(7), b3, b4, b5;
    b3 = b1 & b2;
    b4 = b1 | b2;
    b5 = b1 ^ b2;
    b3.display();
    cout<<"-----------"<<endl;
    b4.display();
    cout<<"-----------"<<endl;
    b5.display();
    getc;
}