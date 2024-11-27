#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <cmath>
#include <iostream>

class ComplexNumber {
public:
    ComplexNumber(double real = 0.0, double imag = 0.0);
    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator-(const ComplexNumber& other) const;
    ComplexNumber operator*(double constant) const;
    double abs() const;
    void print() const;

private:
    double real;
    double imgr;
};

#endif // COMPLEX_NUMBER_H
