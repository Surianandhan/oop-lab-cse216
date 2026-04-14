#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    double a = 3.14, b = 2.718;
    char c = 'A', d = 'B';
    
    cout << "Before Swapping:\n";
    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    
    swapValues(x, y);
    swapValues(a, b);
    swapValues(c, d);
    
    cout << "\nAfter Swapping:\n";
    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    
    return 0;
}