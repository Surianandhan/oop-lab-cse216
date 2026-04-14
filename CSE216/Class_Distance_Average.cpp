#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inches;
    
    Distance() {
        feet = 0;
        inches = 0;
    }
    
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }
    
    void input() {
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter Inches: ";
        cin >> inches;
    }
    
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
    
    static Distance avgDistance(Distance distances[], int n) {
        int totalFeet = 0, totalInches = 0;
        
        for (int i = 0; i < n; i++) {
            totalFeet += distances[i].feet;
            totalInches += distances[i].inches;
        }
        
        totalFeet += totalInches / 12;
        totalInches %= 12;
        
        int avgFeet = totalFeet / n;
        int avgInches = totalInches / n;
        
        return Distance(avgFeet, avgInches);
    }
};

int main() {
    const int MAX = 10;
    Distance distances[MAX];
    int n;
    
    cout << "Enter Number of Distances (MAX 10): ";
    cin >> n;
    
    if (n > MAX) {
        cout << "Max 10 Distances allowed." << endl;
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "Enter Distance " << i + 1 << ":" << endl;
        distances[i].input();
    }
    
    Distance average = Distance::avgDistance(distances, n);
    cout << "Average Distance: ";
    average.display();
    
    return 0;
}