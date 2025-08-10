#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    Student (string n, int a);

    void display(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }

};

Student::Student (string n, int a){
    name = n;
    age = a;
}

int main() {
    Student s1("Swati" , 20);
    s1.display();

    return 0;
}