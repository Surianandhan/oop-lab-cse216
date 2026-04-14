#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
    cout << "Swapped Values: " << a << " " << b << endl;
}

int main() {
    int result = add(1, 2);
    int a = 4, b = 3;
    
    swapValues(a, b);
    cout << "Addition Result: " << result << endl;
    
    return 0;
}