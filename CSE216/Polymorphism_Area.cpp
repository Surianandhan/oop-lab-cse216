#include <iostream>
using namespace std;

class Shape {
public:
    double length, breadth;
    
    void getData() {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }
    
    virtual void displayArea() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    void displayArea() override {
        double area = 0.5 * length * breadth;
        cout << "Area of Triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void displayArea() override {
        double area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape* shape;
    int choice;
    
    cout << "1. Triangle\n2. Rectangle\n";
    cout << "Enter Your Choice: ";
    cin >> choice;
    
    if (choice == 1) {
        shape = new Triangle();
    } else if (choice == 2) {
        shape = new Rectangle();
    } else {
        cout << "Invalid Choice!" << endl;
        return 1;
    }
    
    shape->getData();
    shape->displayArea();
    
    delete shape;
    return 0;
}