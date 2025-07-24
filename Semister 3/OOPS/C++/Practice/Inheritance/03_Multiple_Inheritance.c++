#include <iostream>
using namespace std;

class A {
    public:
    void displayA(){
        cout << "Class A" << endl;

    }
};

class B{
    public:
    void displayB (){
        cout << "Class B"<< endl;
    }
};

class C: public A, public B{
    public:
    void display(){
        cout << "Class C" << endl;
    }
};

int main(){
    A a;
    B b;
    C c;

    a.displayA();
    b.displayB();
    c.display();

    return 0;
}