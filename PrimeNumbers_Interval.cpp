#include <iostream>
using namespace std;

int main() {
    int low, high;
    bool isPrime = true;
    
    cout << "Enter Starting Number: ";
    cin >> low;
    cout << "Enter Ending Number: ";
    cin >> high;
    
    cout << "Prime Numbers Between " << low << " and " << high << " are:\n";
    
    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        for (int i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << low << ", ";
        }
        ++low;
    }
    cout << endl;
    
    return 0;
}