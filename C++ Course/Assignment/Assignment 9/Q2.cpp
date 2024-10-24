#include <iostream>

int main() {
    try {
        int a, b;
        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;

        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }

        int result = a / b;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Runtime error caught: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}
