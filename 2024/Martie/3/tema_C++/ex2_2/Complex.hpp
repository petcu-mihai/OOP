#define COMPLEX_H
#include <string>

using namespace std;

class Complex {

private: float re, im;

public:
    // constructor normal
    Complex(float re, float im);

    // constructor de copiere
    Complex(const Complex& c);

    ~Complex();

    void SetRe(float re);

    void SetIm(float im);

    int GetRe();

    int GetIm();

    string PrintNumber();

    float ComputeModule();

};