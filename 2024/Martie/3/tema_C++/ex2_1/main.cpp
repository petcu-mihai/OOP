#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

class Complex {

private: float re, im;

public:
    // constructor normal
    Complex(float re, float im) : re(re), im(im) {

    }

    // constructor de copiere
    Complex(const Complex& c) : re(c.re), im(c.im) {

    }

    ~Complex() {
        this -> re = 0;
        this -> im = 0;
    }

    void SetRe(float re) {
        this -> re = re;
    }

    void SetIm(float im) {
        this -> im = im;
    }

    int GetRe() {
        return this -> re;
    }

    int GetIm() {
        return this -> im;
    }

    string PrintNumber() {
        return to_string(this -> re) + " + " + to_string(this -> im) + 'i';
    }

    float ComputeModule() {
        return sqrt(pow(this -> re, 2) + pow(this -> im, 2));
    }

};

int main () {
    Complex c1(2, 3);
    cout << c1.PrintNumber() << endl;
    cout << "Modul din " << c1.PrintNumber() << " este " << c1.ComputeModule() << endl;
    Complex c2(c1);
    cout << c2.PrintNumber();
}