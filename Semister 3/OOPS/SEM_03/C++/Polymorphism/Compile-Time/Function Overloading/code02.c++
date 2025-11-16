#include <iostream>
using namespace std;

class Printer {
public:
    void print(string msg) {
        cout << "Message: " << msg << endl;
    }

    void print(string msg, int times) {
        for (int i = 0; i < times; i++) {
            cout << "Message: " << msg << endl;
        }
    }
};

int main() {
    Printer p;
    p.print("Hello");           // Single message
    p.print("Hello again", 3);  // Repeats message 3 times
    return 0;
}