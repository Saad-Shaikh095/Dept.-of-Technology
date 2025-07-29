#include <iostream>
using namespace std;

class Employee{
    protected:
    int empID;
    string empName;

    public:
    void setEmployee(){
        
        cout <<"Enter Employee ID: " <<endl;
        cin >> empID;
        cout <<"Enter Employee Name: " << endl;
        cin >> empName;
    }

    public:
    void displayEmployee(){
        cout << "Employee ID: "<< empID <<endl;
        cout << "Employee Name: "<< empName <<endl;
        
    }

    
};

class Manager: public Employee {
    private:
    string department;
    float bonus;

    public:
    void setManagerDetails(){
        cout << "Enter Employee Department: "<<endl;
        cin >> department;
        cout << "Enter Employee Bonus: " << endl;
        cin >> bonus;

    }

    public:
    void displayManagerDetails(){
        cout << "Employee Department: " <<  department << endl;
        cout << "Employee Bonus: " << bonus << endl;
    }

};



int main(){
  Manager m;
  cout << "-------------------------------\n" <<endl;
  m.setEmployee();
  m.displayEmployee();
  cout << "-------------------------------\n" <<endl;
  m.setManagerDetails();
  m.displayManagerDetails();

    return 0;
}