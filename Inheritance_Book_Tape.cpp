#include <iostream>
#include <string>
using namespace std;

class Publication {
public:
    string title;
    float price;
    
    void getData() {
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Price: ";
        cin >> price;
    }
    
    void putData() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
public:
    int pageCount;
    
    void getData() {
        Publication::getData();
        cout << "Enter Page Count: ";
        cin >> pageCount;
    }
    
    void putData() {
        Publication::putData();
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication {
public:
    float playingTime;
    
    void getData() {
        Publication::getData();
        cout << "Enter Playing Time: ";
        cin >> playingTime;
    }
    
    void putData() {
        Publication::putData();
        cout << "Playing Time: " << playingTime << endl;
    }
};

int main() {
    Book book;
    Tape tape;
    
    cout << "Enter Book Details:\n";
    book.getData();
    
    cout << "\nEnter Tape Details:\n";
    tape.getData();
    
    cout << "\nBook Details:\n";
    book.putData();
    
    cout << "\nTape Details:\n";
    tape.putData();
    
    return 0;
}