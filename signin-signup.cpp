#include<iostream>
using namespace std;

class signup{
    int id, password;
    char name [20];
    public:
    void get_s(){
        cout<<"Enter your name";
        cin>>name;
    }
    void getup(){
        cout<<"Enter your ID";
        cin>>id;
        cout<<"Enter your Password";
        cin>>password;
    }
    void display(){
        cout<<"Registered";
    }
};
class signin : public signup{
    public:
    void get(){
        getup();}
        void disp(){
            cout<<"Signin Successfully";
        }
};
int main() {
    signin s;
    int n;
    cout << "Choose an option:" << endl;
    cout << "1. Sign up." << endl;
    cout << "2. Sign in." << endl;
    cout << "3. Exit." << endl;
    cin >> n;
    if (n == 1) {
        signup s;
        s.get_s();
        s.getup();
        s.display();
    } else if(n==2){
        signin s;
        s.display();
    } else if(n==2){
        s.get();
        s.disp();
    }else if(n==3){
        exit(0);
    }
}