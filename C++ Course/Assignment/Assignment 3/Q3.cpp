#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseAttribute;

public:
    // Constructor
    Base(int attribute) : baseAttribute(attribute) {}

    // Method to display the attribute
    void displayAttribute() {
        cout << "Base Attribute: " << baseAttribute << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
private:
    int derivedAttribute;

public:
    // Constructor
    Derived(int baseAttr, int derivedAttr) : Base(baseAttr), derivedAttribute(derivedAttr) {}

    // Method to display both base and derived attributes
    void displayAttributes() {
        cout << "Base Attribute: " << baseAttribute << endl;
        cout << "Derived Attribute: " << derivedAttribute << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Derived derivedObject(10, 20);

    // Calling methods to display attributes
    cout << "Displaying attributes using Base method:" << endl;
    derivedObject.displayAttribute();
    
    cout << "\nDisplaying attributes using Derived method:" << endl;
    derivedObject.displayAttributes();

    return 0;
}
