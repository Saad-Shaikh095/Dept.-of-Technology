#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;

public:
    // Default constructor
    Book() {
        title = "Untitled";
        pages = 0;
    }

    // Constructor with title only
    Book(string t) {
        title = t;
        pages = 100;  // default page count
    }

    // Constructor with title and pages
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1;                    // Default constructor
    Book b2("C++ Basics");      // Constructor with title
    Book b3("OOP Concepts", 250); // Constructor with title and pages

    b1.display();
    b2.display();
    b3.display();

    return 0;
}