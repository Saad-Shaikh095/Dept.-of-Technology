#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;  // Only accessible within the class

protected:
    int age;         // Accessible within class and derived classes

public:
    string name;     // Accessible from anywhere

    // Public method to set private and protected members
    void setDetails(int r, int a, string n) {
        rollNumber = r;
        age = a;
        name = n;
    }

    // Public method to display all details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Saad";         // Allowed (public)
    // s1.rollNumber = 101;   // ❌ Not allowed (private)
    // s1.age = 20;           // ❌ Not allowed (protected)

    s1.setDetails(101, 20, "Saad");  // Use public method to set values
    s1.display();                    // Use public method to display values
    return 0;
}