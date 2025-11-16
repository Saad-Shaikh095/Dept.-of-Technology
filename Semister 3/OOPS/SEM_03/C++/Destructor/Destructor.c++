#include <iostream>
using namespace std;

class Student {
    int age;

public:
    // Constructor
    Student(int a) {
        age = a;
        cout << "Constructor called\n";
    }

    // Destructor
    ~Student() {
        cout << "Destructor called\n";
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(20);  // Constructor is called here
    s1.display();    // Display age
    // Destructor will be called automatically when s1 goes out of scope
    return 0;
}