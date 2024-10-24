#include <iostream>
#include <string>

using namespace std;

class DataHolder {
private:
    int intValue;
    double doubleValue;
    string stringValue;

public:
    // Constructor
    DataHolder(int intValue, double doubleValue, const string& stringValue) {
        this->intValue = intValue;
        this->doubleValue = doubleValue;
        this->stringValue = stringValue;
    }

    // Copy Constructor
    DataHolder(const DataHolder& other) {
        intValue = other.intValue;
        doubleValue = other.doubleValue;
        stringValue = other.stringValue;
        cout << "Copy Constructor called." << endl;
    }

    // Destructor
    ~DataHolder() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    // Creating an object of DataHolder with different data types
    DataHolder data(10, 3.14, "Hello");

    // Using the copy constructor
    DataHolder copiedData = data;

    // Object gets destroyed when it goes out of scope
    return 0;
}
