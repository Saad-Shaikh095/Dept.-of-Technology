#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
    a->makeSound();  // Output: Dog barks

    a = &c;
    a->makeSound();  // Output: Cat meows

    return 0;
}