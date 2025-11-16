#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";

    cin >> number;

    if (cin.fail()) {
        throw runtime_error("Invalid input! You must enter an integer.");
    }

    cout << "You entered: " << number << endl;
    return 0;
}
