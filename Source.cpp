#include <iostream>

using namespace std;

class Start {
public:
    virtual int engine() const = 0;
};

class Vehicle {
public:
    void transport() {
        cout << " Can travel a long distance in a short time." << endl;
    }
};

class Car :public Vehicle, public Start {
public:
    void Wheels4() {
        cout << " Has four wheels." << endl;
    }
    void capacityC() {
        cout << " Can accommodate five people." << endl;
    }

    int engine() const {
        return 0;
    }
};

class Motorcycle : public Vehicle, public Start {
public:
    void LittleSpace() {
        cout << " Takes up little space and passes through tight spaces." << endl;
    }
    void Wheels2() {
        cout << " Has two wheels." << endl;
    }
    void capacityM() {
        cout << " Can accommodate two people." << endl;
    }

    int engine() const {
        return 0;
    }
};
int main()
{
    Car car;
    Motorcycle motorcycle;
    cout << "     Car" << endl;
    car.capacityC();
    car.engine();
    car.transport();
    car.Wheels4();
    cout << endl << "     Motorcycle";
    motorcycle.capacityM();
    motorcycle.engine();
    motorcycle.LittleSpace();
    motorcycle.transport();
    motorcycle.Wheels2();
    return 0;
}