#include <iostream>
using namespace std;

class Animal {
    public:
    void eat(){
        cout << "Eating" <<endl;
    }
};

class Dog: public Animal {
    public:
    void bark (){
        cout <<"Barking" << endl;
    }
};

class Puppy : public Dog {
    public:
    void weep(){
        cout << "Weeping" << endl;
    }
};

int main (){
    Dog d;
    d.bark();
    
    Puppy p;
    p.weep();
    p.bark();

    return 0;
}