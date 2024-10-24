#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    string result;

    // Concatenation
    result = str1 + " " + str2;
    cout << "Concatenated string: " << result << endl;

    // Length
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Length of str2: " << str2.size() << endl;

    // Accessing characters
    cout << "First character of str1: " << str1[0] << endl;
    cout << "Last character of str2: " << str2.back() << endl;

    // Substring
    string sub = str1.substr(1, 3);  // Starting from index 1 and length 3
    cout << "Substring of str1: " << sub << endl;

    // Finding substring
    if (str1.find("ell") != string::npos) {
        cout << "\"ell\" found in str1 at position: " << str1.find("ell") << endl;
    } else {
        cout << "\"ell\" not found in str1" << endl;
    }

    // Erasing characters
    str2.erase(3, 2);  // Starting from index 3, erase 2 characters
    cout << "After erasing characters: " << str2 << endl;

    // Inserting characters
    str2.insert(3, "lo");
    cout << "After inserting characters: " << str2 << endl;

    // Replacing substring
    str1.replace(1, 2, "i");
    cout << "After replacing substring: " << str1 << endl;

    // Checking if string is empty
    if (str1.empty()) {
        cout << "str1 is empty" << endl;
    } else {
        cout << "str1 is not empty" << endl;
    }

    // Clearing the string
    str1.clear();
    cout << "After clearing str1, it is: " << (str1.empty() ? "empty" : "not empty") << endl;

    return 0;
}
