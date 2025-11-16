#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("example.txt");  // Open the file for reading
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;  // Print each line
        }
        inFile.close();  // Always close the file
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}