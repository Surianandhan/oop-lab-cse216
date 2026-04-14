#include <iostream>
#include <cmath>
using namespace std;

double power(double n, int p = 2) {
    return pow(n, p);
}

int power(int n, int p = 2) {
    return pow(n, p);
}

long power(long n, int p = 2) {
    return pow(n, p);
}

float power(float n, int p = 2) {
    return pow(n, p);
}

void power(char n, int p = 2) {
    for (int i = 0; i < p; i++) {
        cout << n << "*";
    }
    cout << endl;
}

int main() {
    double a;
    int b;
    char c;
    long d;
    float e;
    
    cout << "Enter Double Value: ";
    cin >> a;
    cout << "Enter Integer Value: ";
    cin >> b;
    cout << "Enter Character: ";
    cin >> c;
    cout << "Enter Long Value: ";
    cin >> d;
    cout << "Enter Float Value: ";
    cin >> e;
    
    cout << endl;
    cout << "Double Argument Result: " << power(a, b) << endl;
    cout << "Int Argument Result: " << power(b) << endl;
    cout << "Long Argument Result: " << power(d, b) << endl;
    cout << "Float Argument Result: " << power(e) << endl;
    cout << "Character Argument Result: " << endl;
    power(c, b);
    
    return 0;
}