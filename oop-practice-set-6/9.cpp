#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;   // accessible by derived classes
public:
    Vehicle(string b) {
        brand = b;
    }

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    string type;   // car type (SUV, Sedan, etc.)
    int year;      // optional info

public:
    // Constructor 1: only brand and type
    Car(string b, string t) : Vehicle(b) {
        type = t;
        year = 0;  // default year
    }

    // Constructor 2: brand, type, and year
    Car(string b, string t, int y) : Vehicle(b) {
        type = t;
        year = y;
    }

    void display() {
        cout << "Car Brand: " << brand << ", Type: " << type;
        if (year != 0) cout << ", Year: " << year;
        cout << endl;
    }
};

int main() {
    Car car1("Toyota", "SUV");
    Car car2("Honda", "Sedan", 2023);

    car1.display();
    car2.display();

    return 0;
}
