#include <iostream>
using namespace std;

#define min(X, Y) ((X) < (Y) ? (X) : (Y))

int main() {
    int a, b;
    
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    
    int smaller = min(a, b);
    cout << "Smaller Number is: " << smaller << endl;
    
    return 0;
}