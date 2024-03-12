#include "Complex.hpp"
#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

/* Metode definite in afara clasei [START] */

// constructor normal
Complex::Complex(float re, float im) {
    this -> re = re;
    this -> im = im;
}

// constructor de copiere
Complex::Complex(const Complex& c) : re(c.re), im(c.im) {}

Complex::~Complex() {
    this -> re = 0;
    this -> im = 0;
}

void Complex::SetRe(float re) {
    this -> re = re;
}

void Complex::SetIm(float im) {
    this -> im = im;
}

int Complex::GetRe() {
    return this -> re;
}

int Complex::GetIm() {
    return this -> im;
}

string Complex::PrintNumber() {
    return to_string(this -> re) + " + " + to_string(this -> im) + 'i';
}

float Complex::ComputeModule() {
    return sqrt(pow(this -> re, 2) + pow(this -> im, 2));
}

/* Metode definite in afara clasei [END] */

int main () {
    Complex c1(4, 5);
    cout << c1.PrintNumber() << endl;
    cout << "Modul din " << c1.PrintNumber() << " este " << c1.ComputeModule() << endl;
    Complex c2(c1);
    cout << c2.PrintNumber();
}