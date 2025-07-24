#include <iostream>
using namespace std;

class Car {
    public:
    void dream(){
        cout << "One Day..." << endl;
    }
};

class BMW: public Car {
    public:
    void drift(){
        cout << "Drifting..." << endl;

    }
};

class RollsRoyce : public Car {
    public:
    void ecstacy(){
        cout << "Spirit of Ecstasy..."<< endl;
    }
};

int main(){
    Car c;
    BMW bmw;
    RollsRoyce rr;

    c.dream();

    bmw.drift();
    bmw.dream();
    
    rr.ecstacy();
    rr.dream();
    
    return 0;
}