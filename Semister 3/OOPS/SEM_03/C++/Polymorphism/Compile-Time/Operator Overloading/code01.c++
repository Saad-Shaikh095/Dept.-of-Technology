#include <iostream>
using namespace std;

class Distance {
    int meters;

public:
    Distance(int m = 0) {
        meters = m;
    }

    // Overload + operator
    Distance operator+(Distance d) {
        return Distance(meters + d.meters);
    }

    void display() {
        cout << meters << " meters" << endl;
    }
};

int main() {
    Distance d1(50), d2(30);
    Distance d3 = d1 + d2;  // Calls overloaded +
    d3.display();           // Output: 80 meters
    return 0;
}