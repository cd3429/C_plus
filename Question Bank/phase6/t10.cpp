/*

10. Develop a C++ solution by which a user can add/
subtract/multiply/divide two Complex numbers with help of
Operator Overloading concept. In context of math, a
complex number contains two parts: a real part and an
imagenary part.

*/

#include <iostream>

using namespace std;

class Complex {
private:
    double real, imaginary;

public:
    Complex() : real(0), imaginary(0) {}
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator+ (const Complex& c) const {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex operator- (const Complex& c) const {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    Complex operator* (const Complex& c) const {
        return Complex(real * c.real - imaginary * c.imaginary,
                       real * c.imaginary + imaginary * c.real);
    }

    Complex operator/ (const Complex& c) const {
        double denom = c.real * c.real + c.imaginary * c.imaginary;
        return Complex((real * c.real + imaginary * c.imaginary) / denom,
                       (imaginary * c.real - real * c.imaginary) / denom);
    }

    friend ostream& operator<< (ostream& os, const Complex& c) {
        os << "(" << c.real << " + " << c.imaginary << "i)";
        return os;
    }

    friend istream& operator>> (istream& is, Complex& c) {
        cout << "Enter the real part: ";
        is >> c.real;
        cout << "Enter the imaginary part: ";
        is >> c.imaginary;
        return is;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter the first complex number:\n";
    cin >> c1;

    cout << "Enter the second complex number:\n";
    cin >> c2;

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex quotient = c1 / c2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}

