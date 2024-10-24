#include <iostream>

// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Calling the inline function
    int result = square(num);
    std::cout << "Square of " << num << " is: " << result << std::endl;

    return 0;
}
