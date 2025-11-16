#include <iostream>
using namespace std;

class Student {
private:
    int age;  // Private data member

public:
    // Setter method
    void setAge(int a) {
        if (a > 0)
            age = a;
        else
            cout << "Invalid age!" << endl;
    }

    // Getter method
    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setAge(20);               // Set age using setter
    cout << "Age: " << s.getAge() << endl;  // Get age using getter
    return 0;
}