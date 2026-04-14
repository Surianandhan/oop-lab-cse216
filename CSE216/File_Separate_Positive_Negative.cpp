#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int numNumbers;
    
    cout << "Enter Number of Numbers: ";
    cin >> numNumbers;
    
    if (numNumbers <= 0) {
        cout << "Error: Invalid Number of Numbers." << endl;
        return 1;
    }
    
    ofstream allFile("all_numbers.txt");
    ofstream positiveFile("positive_numbers.txt");
    ofstream negativeFile("negative_numbers.txt");
    
    for (int i = 0; i < numNumbers; i++) {
        int num;
        cout << "Enter Number " << i + 1 << ": ";
        cin >> num;
        
        if (num == 0) {
            cout << "Error: 0 Encountered." << endl;
            return 1;
        }
        
        allFile << num << endl;
        
        if (num > 0) {
            positiveFile << num << endl;
        } else {
            negativeFile << num << endl;
        }
    }
    
    allFile.close();
    positiveFile.close();
    negativeFile.close();
    
    cout << "\nAll Numbers:\n";
    ifstream allFileRead("all_numbers.txt");
    string line;
    while (getline(allFileRead, line)) {
        cout << line << "\t";
    }
    allFileRead.close();
    
    cout << "\nPositive Numbers:\n";
    ifstream positiveFileRead("positive_numbers.txt");
    while (getline(positiveFileRead, line)) {
        cout << line << "\t";
    }
    positiveFileRead.close();
    
    cout << "\nNegative Numbers:\n";
    ifstream negativeFileRead("negative_numbers.txt");
    while (getline(negativeFileRead, line)) {
        cout << line << "\t";
    }
    negativeFileRead.close();
    cout << endl;
    
    return 0;
}