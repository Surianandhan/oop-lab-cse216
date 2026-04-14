#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int divi(int a, int b) { return a / b; }
int mul(int a, int b) { return a * b; }

int main() {
    int a, b, choice;
    
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    
    cout << "1) Add\n2) Sub\n3) Div\n4) Mul\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Sum is: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Difference is: " << sub(a, b) << endl;
            break;
        case 3:
            cout << "Division is: " << divi(a, b) << endl;
            break;
        case 4:
            cout << "Product is: " << mul(a, b) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}