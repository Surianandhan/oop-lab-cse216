#include <iostream>
using namespace std;

void repchar() {
    cout << "Using NO Arguments: No Character Specified" << endl;
}

void repchar(char ch) {
    cout << "Using 1 Argument: " << ch << endl;
}

void repchar(char ch, int n) {
    cout << "Using 2 Arguments: ";
    for (int i = 0; i < n; i++) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    char ch;
    int n;
    
    cout << "Enter Character: ";
    cin >> ch;
    cout << "Enter Integer: ";
    cin >> n;
    
    repchar();
    repchar(ch);
    repchar(ch, n);
    
    return 0;
}