#include <iostream>
#include <string>
// #include <algorithm>

using namespace std;

void generatePermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << endl; // Print permutation
    } else {
        for (int i = left; i <= right; i++) {
            // Swap the current character with the first character
            swap(str[left], str[i]);

            // Recursively generate all permutations starting from left + 1
            generatePermutations(str, left + 1, right);

            // Backtrack: restore the string to its original state
            swap(str[left], str[i]);
        }
    }
}

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Permutations of \"" << str << "\" are:" << endl;
    generatePermutations(str, 0, str.length() - 1);

    return 0;
}
