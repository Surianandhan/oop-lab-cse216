#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int numerator, denominator, result;
    
    cout << "Enter Numerator: ";
    cin >> numerator;
    cout << "Enter Denominator: ";
    cin >> denominator;
    
    try {
        if (denominator == 0) {
            throw invalid_argument("Division by Zero is NOT Allowed.");
        }
        result = numerator / denominator;
        cout << "Result is: " << result << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}