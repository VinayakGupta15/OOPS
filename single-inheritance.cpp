#include<iostream>
using namespace std;
class person{
    int id;
    char name[40];
    public:
    void get_p(){
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>name;
    }
    void disp_p(){
        cout<<"ID: "<<id;
        cout<<"\nName: "<<name;
    }
};

class student : private person{
    char course[20];
    int r;
    public:
    void set_s(){
        get_p();
        cout<<"Enter Course: ";
        cin>>course;
        cout<<"Enter Roll No.: ";
        cin>>r;
    }
    void disp_s(){
        disp_p();
        cout<<"\nCourse: "<<course;
        cout<<"\nRoll No.: "<<r;
    }
};

int main(){
    student s1;
    s1.set_s();
    s1.disp_s();
    getc;
}
