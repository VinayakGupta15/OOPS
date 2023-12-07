#include <iostream>
using namespace std;
class A {
public:
    class B {
    public:
        void display() {
            cout << "Outer class" << endl;
        }
    };
    void displayB() {
        cout << "Inner class" << endl;
    }
};
int main() {
    A obj;
    A::B obj1;
    obj.displayB();
    obj1.display();
    obj.displayB();
    return 0;
}
