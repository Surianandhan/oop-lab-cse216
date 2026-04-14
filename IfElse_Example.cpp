#include <iostream>
using namespace std;

int main() {
    float cgpa;
    cout << "Enter CGPA: ";
    cin >> cgpa;
    
    if (cgpa <= 7) {
        cout << "NOT Eligible for Minor Courses\n";
    } else {
        cout << "Eligible for Minor Courses\n";
    }
    
    return 0;
}