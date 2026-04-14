#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    
    cout << "Enter Number of Elements: ";
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
        product = product * arr[i];
    }
    
    cout << "Product of Array Elements: " << product << endl;
    
    return 0;
}