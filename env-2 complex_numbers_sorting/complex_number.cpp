#include "complex_number.h"

ComplexNumber::ComplexNumber(double real, double imag) : real(real), imag(imag) {}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imag - other.imag);
}

ComplexNumber ComplexNumber::operator*(double constant) const {
    return ComplexNumber(real * constant, imag * constant);
}

double ComplexNumber::abs() const {
    return std::sqrt(real * real + imag * imag);
}

void ComplexNumber::display() const {
    std::cout << real << (imag >= 0 ? "+" : "") << imag << "i";
}
