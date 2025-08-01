// Secure Coding in C++
// Exercise 01_05
// Fixing unsafe expressions, by Eduardo Corpeño

#include <iostream>

#include "../../../inc/helper.hpp"

// Function are safer than macros.
long long int square(int x) {
    return ((x) * (x));
}

int main(){
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    int result = square(input + 1); // expands to: input + 1 * input + 1

    std::cout << "Result: " << result << std::endl;

    endOfExcercise("01_05");
    return 0;
}
