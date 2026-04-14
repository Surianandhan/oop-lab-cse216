#include <iostream>
using namespace std;

bool isSymmetric(int mat[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][j] != mat[j][i])
                return false;
        }
    }
    return true;
}

bool isSkewSymmetric(int mat[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 0)
                return false;
            if (i != j && mat[i][j] + mat[j][i] != 0)
                return false;
        }
    }
    return true;
}

bool isDiagonal(int mat[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && mat[i][j] != 0)
                return false;
        }
    }
    return true;
}

bool isIdentity(int mat[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1)
                return false;
            if (i != j && mat[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter Order of the Matrix: ";
    cin >> n;
    
    int mat[100][100];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter Element " << i + 1 << "," << j + 1 << ": ";
            cin >> mat[i][j];
        }
    }
    
    if (isSymmetric(mat, n))
        cout << "The matrix is Symmetric" << endl;
    else if (isSkewSymmetric(mat, n))
        cout << "The matrix is Skew-Symmetric" << endl;
    else if (isDiagonal(mat, n))
        cout << "The matrix is Diagonal" << endl;
    else if (isIdentity(mat, n))
        cout << "The matrix is Identity" << endl;
    else
        cout << "The matrix is just a regular matrix" << endl;
    
    return 0;
}