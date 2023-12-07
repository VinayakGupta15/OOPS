#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    int x=(a-b);
    try{
        if(x-1==0){
            cout<<"Result= "<<(a/(a-b));
        }
        else{
            throw x;
        }
    }
    catch(int i){
            cout<<"Divide by Zero";
        }
    return 0;
}