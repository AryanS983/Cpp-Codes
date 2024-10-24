#include <iostream>
using namespace std;
void someFunction() {
    try {
        cout << "Inside someFunction() try block" << endl;
        throw runtime_error("Exception from someFunction");
    }
    catch (const exception& e) {
        cerr << "Caught exception in someFunction(): " << e.what() << endl;
        // Rethrow the exception
        throw;
    }
}

int main() {
    try {
        cout << "Calling someFunction()" << endl;
        someFunction();
    }
    catch (const exception& e) {
        cerr << "Caught exception in main(): " << e.what() << endl;
    }

    return 0;
}
