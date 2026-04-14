#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inches;
    
    Distance(int feetVal = 0, int inchesVal = 0) {
        feet = feetVal;
        inches = inchesVal;
    }
    
    Distance operator-(const Distance& other) const {
        int totalInches = (feet * 12 + inches) - (other.feet * 12 + other.inches);
        int totalFeet = totalInches / 12;
        int remainingInches = totalInches % 12;
        return Distance(totalFeet, remainingInches);
    }
    
    void print() const {
        cout << feet << " feet and " << inches << " inches";
    }
};

int main() {
    Distance d1, d2, diff;
    
    cout << "Enter Feet for Distance 1: ";
    cin >> d1.feet;
    cout << "Enter Inches for Distance 1: ";
    cin >> d1.inches;
    
    cout << "Enter Feet for Distance 2: ";
    cin >> d2.feet;
    cout << "Enter Inches for Distance 2: ";
    cin >> d2.inches;
    
    diff = d1 - d2;
    
    cout << "Difference: ";
    diff.print();
    cout << endl;
    
    return 0;
}