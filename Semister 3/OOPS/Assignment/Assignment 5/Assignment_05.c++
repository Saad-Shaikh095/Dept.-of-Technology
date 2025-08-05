#include <iostream>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    float balance;

    public:
    BankAccount(int aN, float iB){
        accountNumber = aN;
        balance = iB;
        cout << "Account has been created: " <<accountNumber <<endl;

    }
    


    void deposit(int a){
        balance += a;
        cout << "Amount to deposit: " << a << endl;
        

    }
    void withdraw(int a){
        if(a <= balance){
            balance -= a;
            cout <<"Amount to withdraw: " << a <<endl;
        }
        else {
            cout<< "No Balance " << endl;
        }
       

    }
    void displaybalance(){
        // cout << "Your Account: " <<accountNumber << endl;
        cout << "Your Balance: " << balance << endl;
    }

    ~BankAccount(){
        cout << "Account closed for: " << accountNumber << endl;
    }   
    
};

int main(){
    BankAccount bankAcc1(12345, 1000);
    bankAcc1.deposit(100);
    bankAcc1.withdraw(50);
    bankAcc1.displaybalance();

    return 0;
}