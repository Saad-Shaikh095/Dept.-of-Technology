#include <iostream>
using namespace std;

class Car {
    private:
    string brand;
    int modelYear;

    public:
    Car(string b, int y){
        brand = b;
        modelYear = y;
        cout << "Car Constructor called for "<< brand << endl;
    }

    void display(){
        cout << "Brand: " << brand << "\nModel Year: "<< modelYear << endl;
    }

    ~Car(){
        cout << "Car Destructor called for "<< brand << endl;
    }
};

int main(){
    Car c1 ("BMW", 1990);
    Car c2 ("RollsRoyce", 2020);

    c1.display();
    c2.display();

    return 0;
}