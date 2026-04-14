#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;
    
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter Second Number: ";
    cin >> num2;
    
    switch (op) {
        case '+':
            cout << "Addition is " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtraction is " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Multiplication is " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Division is " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid Operation" << endl;
    }
    
    return 0;
}