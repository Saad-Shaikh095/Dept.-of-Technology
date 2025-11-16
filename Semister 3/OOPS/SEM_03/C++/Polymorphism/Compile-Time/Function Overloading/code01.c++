#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    cout << "Int add: " << c.add(5, 3) << endl;       // Calls int version
    cout << "Double add: " << c.add(2.5, 3.7) << endl; // Calls double version
    return 0;
}