#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class StudentData {
public:
    int rollNo;
    string name, dept, phoneNo, area;
    
    StudentData() {}
    
    StudentData(int r, string n, string d, string p, string a) {
        rollNo = r;
        name = n;
        dept = d;
        phoneNo = p;
        area = a;
    }
    
    bool readData(ifstream& file) {
        if (file >> rollNo >> name >> dept >> phoneNo >> area) {
            return true;
        }
        return false;
    }
    
    void displayData() {
        cout << setw(10) << left << rollNo
             << setw(25) << left << name
             << setw(15) << left << dept
             << setw(15) << right << phoneNo
             << setw(15) << right << area << endl;
    }
};

int main() {
    ofstream outFile("student_data.txt");
    
    outFile << "101 Surianandhan CSE 8220838475 Thuraiyur\n";
    outFile << "102 Vaibhav CSE 93459967 Muscat\n";
    outFile.close();
    
    ifstream inFile("student_data.txt");
    StudentData student;
    
    cout << setw(10) << left << "RollNo"
         << setw(25) << left << "Name"
         << setw(15) << left << "Dept"
         << setw(15) << right << "PhoneNo"
         << setw(15) << right << "Area" << endl;
    cout << string(80, '-') << endl;
    
    while (student.readData(inFile)) {
        student.displayData();
    }
    inFile.close();
    
    return 0;
}