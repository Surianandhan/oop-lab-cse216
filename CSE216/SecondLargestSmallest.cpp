#include <iostream>
using namespace std;

int main() {
    int n, temp;
    
    cout << "Enter Number of Values: ";
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter Value " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    // Bubble sort
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << "Second Smallest Number: " << arr[1] << endl;
    cout << "Second Largest Number: " << arr[n - 2] << endl;
    
    return 0;
}