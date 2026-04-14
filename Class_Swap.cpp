#include <iostream>
using namespace std;

class Number {
private:
    int a, b;
    
public:
    void getData();
    void swapNumber();
    void display();
};

void Number::getData() {
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
}

void Number::swapNumber() {
    int temp = a;
    a = b;
    b = temp;
}

void Number::display() {
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    Number num;
    num.getData();
    cout << "Before swapping" << endl;
    num.display();
    num.swapNumber();
    cout << "After swapping" << endl;
    num.display();
    return 0;
}