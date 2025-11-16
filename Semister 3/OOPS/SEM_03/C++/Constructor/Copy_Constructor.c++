#include <iostream>
using namespace std;

class Student {
    int age;

public:
    // Parameterized constructor
    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(20);     // Original object
    Student s2 = s1;    // Copy constructor is called here
    s2.display();       // Displays: Age: 20
    return 0;
}