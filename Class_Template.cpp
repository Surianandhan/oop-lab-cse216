#include <iostream>
using namespace std;

template <class T>
class Operations {
public:
    T add(T a, T b) {
        return a + b;
    }
    
    void swapValues(T &a, T &b) {
        T temp = a;
        a = b;
        b = temp;
        cout << "Swapped Values: " << a << " " << b << endl;
    }
};

int main() {
    Operations<int> op;
    int result = op.add(1, 2);
    int a = 4, b = 3;
    
    op.swapValues(a, b);
    cout << "Addition Result: " << result << endl;
    
    return 0;
}