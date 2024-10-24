#include <iostream>
#include <string>
using namespace std;
int main() {
    try {
        string input;
        cout << "Enter a number: ";
        cin >> input;

        // Check if the input can be converted to an integer
        int number = stoi(input);
        cout << "You entered: " << number << endl;
    }
    catch ( invalid_argument e) {
        cerr << "Invalid argument: "  << endl;
    }
    catch ( out_of_range e) {
        cerr << "Out of range: "  << endl;
    }

    return 0;
}
