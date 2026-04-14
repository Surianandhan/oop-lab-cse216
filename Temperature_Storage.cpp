#include <iostream>
using namespace std;

int main() {
    string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    string city1, city2;
    float temp1[7], temp2[7];
    
    cout << "Enter Name of City 1: ";
    cin >> city1;
    cout << "Enter Name of City 2: ";
    cin >> city2;
    
    for (int i = 0; i < 7; i++) {
        cout << "Enter Temperature on " << week[i] << " in " << city1 << ": ";
        cin >> temp1[i];
    }
    
    for (int i = 0; i < 7; i++) {
        cout << "Enter Temperature on " << week[i] << " in " << city2 << ": ";
        cin >> temp2[i];
    }
    
    cout << endl;
    
    for (int i = 0; i < 7; i++) {
        cout << "Temperature in " << city1 << " on " << week[i] << " is " << temp1[i] << "°C" << endl;
    }
    
    for (int i = 0; i < 7; i++) {
        cout << "Temperature in " << city2 << " on " << week[i] << " is " << temp2[i] << "°C" << endl;
    }
    
    return 0;
}