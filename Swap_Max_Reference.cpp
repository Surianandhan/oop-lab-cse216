#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int findmax(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    
    cout << "Enter Value of X: ";
    cin >> x;
    cout << "Enter Value of Y: ";
    cin >> y;
    
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;
    
    int maxval = findmax(x, y);
    cout << "Maximum Value: " << maxval << endl;
    
    return 0;
}