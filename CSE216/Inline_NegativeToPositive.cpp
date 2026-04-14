#include <iostream>
using namespace std;

inline void negtopos(int &num) {
    if (num < 0) {
        num = -num;
    }
}

int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    
    cout << "Before: " << number << endl;
    negtopos(number);
    cout << "After: " << number << endl;
    
    return 0;
}