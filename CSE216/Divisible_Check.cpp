#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    
    cout << "Enter Dividend: ";
    cin >> dividend;
    cout << "Enter Divisor: ";
    cin >> divisor;
    
    if (dividend % divisor == 0) {
        cout << dividend << " is Divisible by " << divisor << endl;
    } else {
        cout << dividend << " is NOT Divisible by " << divisor << endl;
    }
    
    return 0;
}