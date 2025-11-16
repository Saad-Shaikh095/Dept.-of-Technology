#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    Student(int r) {
        roll = r;
    }

    // Overload == operator
    bool operator==(Student s) {
        return roll == s.roll;
    }
};

int main() {
    Student s1(101), s2(102), s3(101);

    if (s1 == s3)
        cout << "s1 and s3 are equal\n";
    else
        cout << "s1 and s3 are not equal\n";

    if (s1 == s2)
        cout << "s1 and s2 are equal\n";
    else
        cout << "s1 and s2 are not equal\n";

    return 0;
}