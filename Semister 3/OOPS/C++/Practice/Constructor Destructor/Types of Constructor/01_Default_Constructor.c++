#include <iostream>
using namespace std;

class Student {
    public:
    Student(){
        cout << "Default Constructor called" << endl;
    }
};

int main(){
    Student s1;

    return 0;
}