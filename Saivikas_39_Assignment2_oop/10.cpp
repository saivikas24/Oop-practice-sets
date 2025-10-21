// Q10. Design a simple example that demonstrates abstract classes and pure virtual
// functions. Create a base class Shape with a pure virtual function area() and
// derive Circle and Square classes. Explain

#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r){ 
        radius = r; 
    }
    float area() override {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape {
private:
    float side;
public:
    Square(float s) {
         side = s; 
        }
    float area() override {
        return side * side;
    }
};

int main() {
    Circle c(5);
    Square s(4);

    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Square: " << s.area() << endl;

    return 0;
}
