#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");  // Create and open a file for writing

    if (outFile.is_open()) {
        outFile << "Hello, Saad!\n";
        outFile << "This is a file handling example.\n";
        outFile.close();  // Always close the file
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    return 0;
}