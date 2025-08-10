#include <iostream>
using namespace std;

class Student {
    private:
    string name;
    public:
    Student(){
        name = "Default Student";
        cout <<"Constructor called!" << endl;
    }
    
    void display(){
        cout << "Name: "<< name << endl;
    }
};


int main(){
    Student s;
    s.display();
    return 0;
}