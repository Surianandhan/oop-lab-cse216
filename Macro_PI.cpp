#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    double radius;
    cout << "Enter Radius of Circle: ";
    cin >> radius;
    
    double area = PI * radius * radius;
    cout << "Area of Circle: " << area << endl;
    
    return 0;
}