#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;

    s = &c;
    s->draw();  // Output: Drawing a circle

    return 0;
}