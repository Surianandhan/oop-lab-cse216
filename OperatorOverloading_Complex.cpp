#include <iostream>
using namespace std;

class Complex {
public:
    double real, imaginary;
    
    Complex(double realPart = 0.0, double imaginaryPart = 0.0) {
        real = realPart;
        imaginary = imaginaryPart;
    }
    
    Complex operator+(const Complex& other) const {
        double newReal = real + other.real;
        double newImaginary = imaginary + other.imaginary;
        return Complex(newReal, newImaginary);
    }
    
    Complex operator-() const {
        return Complex(-real, -imaginary);
    }
    
    void print() const {
        cout << real << " + " << imaginary << "i";
    }
};

int main() {
    Complex z(3, -2);
    
    cout << "Original: ";
    z.print();
    cout << endl;
    
    cout << "Negated: ";
    (-z).print();
    cout << endl;
    
    return 0;
}