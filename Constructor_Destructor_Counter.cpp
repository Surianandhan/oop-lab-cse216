#include <iostream>
using namespace std;

class Counter {
public:
    Counter() {
        static int count = 0;
        ++count;
        cout << "Object created: " << count << endl;
    }
    
    ~Counter() {
        static int count = 0;
        ++count;
        cout << "Object destroyed: " << count << endl;
    }
};

int main() {
    int n;
    cout << "Enter Number of Objects: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        Counter c;
    }
    
    return 0;
}