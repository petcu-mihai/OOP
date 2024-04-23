#include "Complex.h"

// Constructors
Complex::Complex() : real_data(0), imag_data(0) {}

Complex::Complex(double real, double imag) : real_data(real), imag_data(imag) {}

// Accessors
bool Complex::is_real() const {
    return imag_data == 0;
}

double Complex::real() const {
    return real_data;
}

double Complex::imag() const {
    return imag_data;
}

double Complex::abs() const {
    return std::sqrt(real_data * real_data + imag_data * imag_data);
}

Complex Complex::conjugate() const {
    return Complex(real_data, -imag_data);
}

// Functional Operators
Complex& Complex::operator()(double real, double imag) {
    real_data = real;
    imag_data = imag;
    return *this;
}

// Arithmetic Operators
Complex& Complex::operator+=(const Complex& other) {
    real_data += other.real_data;
    imag_data += other.imag_data;
    return *this;
}

Complex& Complex::operator-=(const Complex& other) {
    real_data -= other.real_data;
    imag_data -= other.imag_data;
    return *this;
}

Complex& Complex::operator*=(const Complex& other) {
    double temp_real = real_data * other.real_data - imag_data * other.imag_data;
    double temp_imag = real_data * other.imag_data + imag_data * other.real_data;
    real_data = temp_real;
    imag_data = temp_imag;
    return *this;
}

// Prefix and Postfix Increments and Decrements
Complex& Complex::operator++() {
    ++real_data;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp = *this;
    ++(*this);
    return temp;
}

Complex& Complex::operator--() {
    --real_data;
    return *this;
}

Complex Complex::operator--(int) {
    Complex temp = *this;
    --(*this);
    return temp;
}

// Unary minus
Complex Complex::operator-() const {
    return Complex(-real_data, -imag_data);
}

// Equality Operators
bool Complex::operator==(const Complex& other) const {
    return real_data == other.real_data && imag_data == other.imag_data;
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

// Non-member Arithmetic Operators
Complex operator+(const Complex& l, const Complex& r) {
    return Complex(l.real_data + r.real_data, l.imag_data + r.imag_data);
}

Complex operator+(const Complex& l, double r) {
    return Complex(l.real_data + r, l.imag_data);
}

Complex operator+(double l, const Complex& r) {
    return Complex(l + r.real_data, r.imag_data);
}

Complex operator-(const Complex& l, const Complex& r) {
    return Complex(l.real_data - r.real_data, l.imag_data - r.imag_data);
}

Complex operator-(const Complex& l, double r) {
    return Complex(l.real_data - r, l.imag_data);
}

Complex operator-(double l, const Complex& r) {
    return Complex(l - r.real_data, -r.imag_data);
}

Complex operator*(const Complex& l, const Complex& r) {
    double real = l.real_data * r.real_data - l.imag_data * r.imag_data;
    double imag = l.real_data * r.imag_data + l.imag_data * r.real_data;
    return Complex(real, imag);
}

Complex operator*(const Complex& l, double r) {
    return Complex(l.real_data * r, l.imag_data * r);
}

Complex operator*(double l, const Complex& r) {
    return Complex(l * r.real_data, l * r.imag_data);
}

// Stream Output Operator
std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    if (complex.real() == 0 && complex.imag() == 0) {
        out << "0";
    } else if (complex.real() == 0) {
        out << complex.imag() << "i";
    } else if (complex.imag() == 0) {
        out << complex.real();
    } else {
        out << complex.real() << (complex.imag() > 0 ? " + " : " - ") << std::fabs(complex.imag()) << "i";
    }
    return out;
}
