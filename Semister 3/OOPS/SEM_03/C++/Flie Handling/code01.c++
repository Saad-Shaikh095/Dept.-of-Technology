#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "data.txt";

    // 1️⃣ Write to file using ofstream
    ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << "Name: Saad\n";
        outFile << "Age: 20\n";
        outFile.close();
        cout << "Data written using ofstream.\n";
    }

    // 2️⃣ Read from file using ifstream
    ifstream inFile("data.txt");
    string line;
    if (inFile.is_open()) {
        cout << "Reading data using ifstream:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

    // 3️⃣ Append to file using fstream
    fstream file;
    file.open("data.txt", ios::out | ios::app);  // open for writing + appending
    if (file.is_open()) {
        file << "Course: Data Science\n";
        file.close();
        cout << "Data appended using fstream.\n";
    }

    return 0;
}