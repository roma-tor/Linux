#include "sorting.h"
#include <algorithm>

void sortComplexNums(std::vector<ComplexNumber>& numbers) {
    std::sort(numbers.begin(), numbers.end(), [](const ComplexNumber& a, const ComplexNumber& b) {
        return a.abs() < b.abs();
    });
}
