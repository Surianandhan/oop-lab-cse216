#include <iostream>
using namespace std;

int main() {
    int base, exponent, result = 1;
    
    cout << "Enter Base Value: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;
    
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    
    cout << "Value of " << base << "^" << exponent << " = " << result << endl;
    
    return 0;
}