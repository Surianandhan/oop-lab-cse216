#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int regNo;
    float cgpa;
    
public:
    Student() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Register Number: ";
        cin >> regNo;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Register Number: " << regNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student stu;
    stu.display();
    return 0;
}