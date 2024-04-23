#pragma once

#include <cmath>
#include <iostream>

class Complex {
private:
    double real_data;
    double imag_data;

public:
    // Constructors
    Complex();
    Complex(double real, double imag);

    // Accessors
    bool is_real() const;
    double real() const;
    double imag() const;
    double abs() const;
    Complex conjugate() const;

    // Operator overloads
    Complex& operator()(double real, double imag);
    Complex& operator++(); // Prefix increment
    Complex operator++(int); // Postfix increment uses prefix
    Complex& operator--(); // Prefix decrement
    Complex operator--(int); // Postfix decrement uses prefix
    Complex operator-() const; // Unary minus

    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);

    // Equality checks
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;

    // Friend functions for arithmetic operations
    friend Complex operator+(const Complex& l, const Complex& r);
    friend Complex operator+(const Complex& l, double r);
    friend Complex operator+(double l, const Complex& r);
    friend Complex operator-(const Complex& l, const Complex& r);
    friend Complex operator-(const Complex& l, double r);
    friend Complex operator-(double l, const Complex& r);
    friend Complex operator*(const Complex& l, const Complex& r);
    friend Complex operator*(const Complex& l, double r);
    friend Complex operator*(double l, const Complex& r);

    // Stream insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Complex& complex);
};

// Non-member arithmetic operators
Complex operator+(const Complex& l, const Complex& r);
Complex operator+(const Complex& l, double r);
Complex operator+(double l, const Complex& r);
Complex operator-(const Complex& l, const Complex& r);
Complex operator-(const Complex& l, double r);
Complex operator-(double l, const Complex& r);
Complex operator*(const Complex& l, const Complex& r);
Complex operator*(const Complex& l, double r);
Complex operator*(double l, const Complex& r);

// Stream output operator
std::ostream& operator<<(std::ostream& out, const Complex& complex);
