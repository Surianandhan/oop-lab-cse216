#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter Number of Rows: ";
    cin >> rows;
    cout << "Enter Number of Columns: ";
    cin >> cols;
    
    int m1[rows][cols], m2[rows][cols], result[rows][cols];
    
    cout << "Enter Elements of Matrix 1:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter Element " << i + 1 << "," << j + 1 << ": ";
            cin >> m1[i][j];
        }
    }
    
    cout << "Enter Elements of Matrix 2:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter Element " << i + 1 << "," << j + 1 << ": ";
            cin >> m2[i][j];
        }
    }
    
    // Addition
    cout << "\nSum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    // Subtraction
    cout << "\nDifference of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = m1[i][j] - m2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}