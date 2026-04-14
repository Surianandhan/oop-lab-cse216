#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, sum;
    
    cout << "Enter Number of Terms: ";
    cin >> n;
    
    cout << a << "\t" << b << "\t";
    
    for (int i = 2; i <= n; i++) {
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << "\t";
    }
    cout << endl;
    
    return 0;
}