#include <iostream>
using namespace std;

// Base class 1
class Base1 {
protected:
    int value1;

public:
    Base1(int v1) : value1(v1) {}

    int getValue1() const {
        return value1;
    }
};

// Base class 2
class Base2 {
protected:
    double value2;

public:
    Base2(double v2) : value2(v2) {}

    double getValue2() const {
        return value2;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    Derived(int v1, double v2) : Base1(v1), Base2(v2) {}

    int getValueFromBase1() const {
        return Base1::getValue1();
    }

    double getValueFromBase2() const {
        return Base2::getValue2();
    }
};

int main() {
    // Creating an object of the derived class
    Derived derived(10, 3.14);

    // Accessing values using getter methods
    cout << "Value from Base1: " << derived.getValueFromBase1() << endl;
    cout << "Value from Base2: " << derived.getValueFromBase2() << endl;

    return 0;
}
