#include <iostream>
// #include <stdexcept>
using namespace std;

void functionB() {
    try {
        throw runtime_error("Error occurred in functionB");
    } catch ( runtime_error e) {
        cout << "Caught in functionB: " << e.what() << endl;
        // Rethrow the exception to be handled by the caller
        throw;
    }
}

void functionA() {
    try {
        functionB();
    } catch ( runtime_error e) {
        cout << "Caught in functionA: " << e.what() << endl;
        throw;
    }
}

int main() {
    try {
        functionA();
    } catch ( runtime_error e) {
        cout << "Caught in main: " << e.what() << endl;
    }

    return 0;
}
