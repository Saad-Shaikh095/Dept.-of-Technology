#include <iostream>
using namespace std;

class Student{
    private:
        int rollNo;

    protected:
        string grade;

    public:
        string name;

        void setname(string a){
            name = a;
        }
        string getname(){
            return name;
        }

        void setrollNo(int b){
            rollNo = b;
        }
        int getrollNo(){
            return rollNo;
        }

        void setgrade(string c){
            grade = c;
        }
        string getgrade(){
            return grade;
        }
    
        
};

class Derived : public Student{
    public:
        void display(){
           
            
            
    }
        
};

int main(){
    Student s;
    s.setname("Rahul");
     cout << "Name: " << s.getname();
    s.setrollNo(101);
    cout << "\nRoll No: " << s.getrollNo();
    s.setgrade("A");
    cout << "\nGrade: " << s.getgrade();
    Derived d;
    d.display();

    return 0;
}
