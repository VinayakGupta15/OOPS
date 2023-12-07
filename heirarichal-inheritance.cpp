#include <iostream>
using namespace std;

class person
{
protected:
    int id;
    char name[40];

public:
    void get()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }
    void disp_p()
    {
        cout << "ID: " << id<<endl;
        cout << "\nName: " << name<<endl;
    }
};

class teacher : public person
{
private:
    char sub[10];

public:
    void get_t()
    {
        person::get();
        cout << "Enter Subject: ";
        cin >> sub;
    }
    void disp_t()
    {
        person::disp_p();
        cout << "\nSubject: " << sub<<endl;
    }
};

class student : public person
{
private:
    char branch[40];

public:
    void get_r()
    {
        person::get();
        cout << "Enter Branch: ";
        cin >> branch;
    }
    void disp_s()
    {
        person::disp_p();
        cout << "\nBranch: " << branch<<endl;
    }
};

int main()
{
    person obj;
    obj.get();
    obj.disp_p();
    teacher obj1;
    obj1.get_t();
    obj1.disp_t();
    student obj2;
    obj2.get_r();
    obj2.disp_s();
    getc;
}