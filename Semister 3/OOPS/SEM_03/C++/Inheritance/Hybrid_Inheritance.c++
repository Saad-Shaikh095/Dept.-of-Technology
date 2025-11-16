#include <iostream>
using namespace std;

class A {
    public:
    void showA(){
        cout << "A\n" << endl;
    }
};

class B: public A {
    public:
    void showB(){
        cout << "B\n" << endl;
    }
};

class C {
    public:
    void showC(){
        cout <<"C\n" << endl;
    }
};

class D: public B, public C {
    public:
    void showD(){
        cout << "D\n" << endl;
    }
};

int main(){
    A a;
    B b;
    C c; 
    D d;

    a. showA();

    b.showA();
    b.showB();

    c.showC();

    d.showA();
    d.showB();
    d.showC();
    d.showD();

    return 0;

}