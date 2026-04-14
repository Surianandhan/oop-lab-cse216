#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    long empNum;
    
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Employee Number: ";
        cin >> empNum;
    }
    
    void putData() {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << empNum << endl;
    }
};

int main() {
    Employee employees[10];
    int num;
    
    cout << "Enter Number of Employees (MAX 10): ";
    cin >> num;
    
    if (num > 10) {
        cout << "Max 10 Employees Allowed." << endl;
        return 1;
    }
    
    for (int i = 0; i < num; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].getData();
    }
    
    cout << "\nEmployee Data:\n";
    for (int i = 0; i < num; i++) {
        employees[i].putData();
        cout << endl;
    }
    
    return 0;
}