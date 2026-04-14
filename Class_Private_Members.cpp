#include <iostream>
using namespace std;

class Student {
private:
    char name[20];
    
public:
    void getName() {
        cout << "Name: ";
        cin >> name;
    }
    
    void display() {
        cout << name << endl;
    }
};

int main() {
    Student s;
    s.getName();
    s.display();
    return 0;
}