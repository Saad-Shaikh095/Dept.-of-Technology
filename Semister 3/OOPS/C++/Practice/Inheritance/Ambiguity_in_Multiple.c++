#include <iostream>
using namespace std;

class A{
    public:
    void show(){
        cout << "A\n" << endl;
    }
};

class B {
    public:
    void show(){
        cout << "B\n" << endl;
    }
};

class C: public A, public B{

};

int main(){
    C obj;
    
    obj.A::show();
    obj.B::show();

    return 0;
}