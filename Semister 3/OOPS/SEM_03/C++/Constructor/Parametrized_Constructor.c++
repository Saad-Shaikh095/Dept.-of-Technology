#include <iostream>
using namespace std;

class Student {
    int age;

public:
    // Parameterized constructor
    Student(int a) {
        age = a;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(20);  // Object created with age = 20
    s1.display();
    return 0;
}