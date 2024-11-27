#include <iostream>
#include <vector>
#include "complex_number.h"
#include "sorting.h"

int main() {
    std::vector<ComplexNumber> complexNumbers = {
        ComplexNumber(1.0, 2.0),
        ComplexNumber(2.0, 3.0),
        ComplexNumber(0.0, -1.0),
        ComplexNumber(5.0, 5.0)
    };

    std::cout << "Original complex numbers:\n";
    for (const auto& cn : complexNumbers) {
        cn.display();
        std::cout << "\n";
    }

    sortComplexNums(complexNumbers);

    std::cout << "Sorted complex numbers by absolute value:\n";
    for (const auto& cn : complexNumbers) {
        cn.display();
        std::cout << "\n";
    }

    return 0;
}
