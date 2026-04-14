#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int age;
    
    cout << "Enter Age: ";
    cin >> age;
    
    try {
        if (age < 18) {
            throw invalid_argument("You must be at least 18 years old to vote.");
        }
        cout << "You Can Vote." << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}