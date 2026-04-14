#include <iostream>
using namespace std;

int main() {
    float sum, sub, mul, div;
    int mod, a, b;
    
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    
    cout << "Sum = " << sum << endl;
    cout << "Subtraction = " << sub << endl;
    cout << "Multiplication = " << mul << endl;
    cout << "Division = " << div << endl;
    cout << "Modulus = " << mod << endl;
    
    return 0;
}