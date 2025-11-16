#include <iostream>
using namespace std;

class Student {
    int age;
    string name;

public:
    // Default constructor
    Student() {
        age = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Student(int a, string n) {
        age = a;
        name = n;
    }

    // Constructor with only age
    Student(int a) {
        age = a;
        name = "Unnamed";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;               // Calls default constructor
    Student s2(20, "Saad");   // Calls constructor with age and name
    Student s3(18);           // Calls constructor with only age

    s1.display();
    s2.display();
    s3.display();

    return 0;
}