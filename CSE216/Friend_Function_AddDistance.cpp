#include <iostream>
using namespace std;

class DM; // Forward declaration

class DB {
public:
    int feet, inches;
    
    DB() {
        feet = inches = 0;
    }
    
    DB(int f, int i) {
        feet = f;
        inches = i;
    }
    
    friend DB add(DM d1, DB d2);
    
    void display() {
        cout << feet << " Feet " << inches << " Inches" << endl;
    }
};

class DM {
public:
    int meters, centimeters;
    
    DM() {
        meters = centimeters = 0;
    }
    
    DM(int m, int c) {
        meters = m;
        centimeters = c;
    }
    
    friend DB add(DM d1, DB d2);
    
    void display() {
        cout << meters << " Meters " << centimeters << " Centimeters" << endl;
    }
};

DB add(DM d1, DB d2) {
    int totalInches = (d1.meters * 100 + d1.centimeters) * 0.393701 + 
                      d2.feet * 12 + d2.inches;
    int feet = totalInches / 12;
    int inches = totalInches % 12;
    return DB(feet, inches);
}

int main() {
    DM dm;
    DB db;
    
    cout << "Enter Distance in Meters and Centimeters: ";
    cin >> dm.meters >> dm.centimeters;
    cout << "Enter Distance in Feet and Inches: ";
    cin >> db.feet >> db.inches;
    
    DB result = add(dm, db);
    result.display();
    
    return 0;
}